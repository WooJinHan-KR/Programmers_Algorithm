#include <iostream>
#include <map>
#include <iomanip>

int main() {
    std::map<std::string, int> trees;
    std::string treeName;
    int totalCount = 0;

    while (std::getline(std::cin, treeName)) {
        if (treeName.empty())
            break;

        trees[treeName]++;
        totalCount++;
    }

    std::cout << std::fixed << std::setprecision(4);

    for (const auto& tree : trees) {
        double percentage = static_cast<double>(tree.second) / totalCount * 100;
        std::cout << tree.first << " " << percentage << '\n';
    }

    return 0;
}
