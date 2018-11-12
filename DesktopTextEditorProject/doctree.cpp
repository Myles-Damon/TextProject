#include <windows.h>
#include <vector>
#include <string>
#include <filesystem>



namespace docTree
{

/// Gets a list of subdirectories under a specified path
/// @param[out] output Empty vector to be filled with result
/// @param[in]  path   Input path, may be a relative path from working dir
void getSubdirs(std::vector<std::wstring>& output, const std::wstring& path)
{
    WIN32_FIND_DATA findfiledata;
    HANDLE hFind = INVALID_HANDLE_VALUE;

    wchar_t fullpath[MAX_PATH];
    GetFullPathNameW(path.c_str(), MAX_PATH, fullpath, nullptr);
    std::wstring fp(fullpath);

    //fp.append("//*");

    //std::wstring lpcthing = "//*";

    //WCHAR wTest[260];
    //std::wstring t = L"";

    hFind = FindFirstFile((LPCWSTR)(fp + L"\\*").c_str(), &findfiledata);
    if (hFind != INVALID_HANDLE_VALUE)
    {
        do
        {
            if ((findfiledata.dwFileAttributes/* | FILE_ATTRIBUTE_DIRECTORY*/) == FILE_ATTRIBUTE_DIRECTORY/*
                && (findfiledata.cFileName[0] != '.')*/)
            {
                //t = std::wstring(findfiledata.cFileName);
                output.push_back(findfiledata.cFileName);
            }
        }
        while (FindNextFile(hFind, &findfiledata) != 0);
    }
}

/// Gets a list of subdirectory and their subdirs under a specified path
/// @param[out] output Empty vector to be filled with result
/// @param[in]  path   Input path, may be a relative path from working dir
/// @param[in]  prependStr String to be pre-appended before each result
///                        for top level path, this should be an empty string
void getSubdirsRecursive(std::vector<std::wstring>& output,
                         const std::wstring& path,
                         const std::wstring& prependStr)
{
    std::vector<std::wstring> firstLvl;
    docTree::getSubdirs(firstLvl, path);
    for (std::vector<std::wstring>::iterator i = firstLvl.begin();
         i != firstLvl.end(); ++i)
    {
        output.push_back(prependStr + *i);
        getSubdirsRecursive(output,
            path + std::wstring(L"\\") + *i + std::wstring(L"\\"),
            prependStr + *i + std::wstring(L"\\"));
    }
}
}
