#ifndef DOCTREE_H
#define DOCTREE_H

#include <windows.h>
#include <filesystem>
#include <vector>
#include <string>

namespace docTree
{
    void getSubdirs(std::vector<std::wstring>&, const std::wstring&);

    void getSubdirsRecursive(std::vector<std::wstring>&,
                             const std::wstring&,
                             const std::wstring&);

}

#endif // DOCTREE_H
