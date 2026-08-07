#include <iostream>
#include <string>
#include <vector>

int main() {
    const std::string teal  = "\033[36m";
    const std::string green = "\033[32m";
    const std::string reset = "\033[0m";

    std::vector<std::string> logo = {
        green + "         .-/+oossssoo+/.        " + reset,
        green + "     `:+ssssssssssssssssss+:`     " + reset,
        green + "   .+ssssssssssssssssssssssss+.    " + reset,
        green + "  +sssssssssssssssssssssssssss+   " + reset,
        green + " +ssssssssssssssssssssssssssss+  " + reset,
        green + " +ssssssssssssssssssssssssssss+  " + reset,
        green + " .ssssssssssssssssssssssssssss.  " + reset,
        green + "  hNNNNNNNNNNNNNNNNNNNNNNNNh    " + reset,
        green + "  hNNNNMMNNNNNNNNNNNNNNNNNh    " + reset,
        green + "  hNNNNMMNNNNNNNNNNNNNNNNh     " + reset,
        green + "  hNNNNNNNNNNNNNNNNNNNNNNh     " + reset,
        green + "  hNNNNMMNNNNNNNNNNNNNNNNh     " + reset,
        green + "  hNNNNMMNNNNNNNNNNNNNNNNNh    " + reset,
        green + "  hNNNNNNNNNNNNNNNNNNNNNNNNh   " + reset,
        green + "  `+ssssssssssssssssssssss+    " + reset,
        green + "   .ssssssssssssssssssssss.     " + reset,
        green + "    +sssssssssssssssssss+       " + reset,
        green + "     `:+ssssssssssssss+:`       " + reset,
        green + "         .-/+oossssoo+/.       " + reset,
    };

    std::vector<std::string> info = {
        teal + "OS"       + reset + ": HackOS 6.8.0-cyber x86_64",
        teal + "Host"     + reset + ": devil_Mike Workstation",
        teal + "Kernel"   + reset + ": 6.8.0-cyber",
        teal + "Uptime"   + reset + ": since age 14",
        teal + "Shell"    + reset + ": /bin/zsh 5.9",
        teal + "WM"       + reset + ": i3-gaps",
        teal + "CPU"      + reset + ": devil_Mike @ 5.1GHz",
        teal + "Memory"   + reset + ": 5x hackathon Contestant",
    };

    std::cout << "" << std::endl;
    std::cout << teal << "cyberhatc@devil_Mike" << reset << std::endl;
    std::cout << teal << "--------------------" << reset << std::endl;

    size_t maxLines = std::max(logo.size(), info.size());

    for (size_t i = 0; i < maxLines; ++i) {
        if (i < logo.size()) {
            std::cout << "  " << logo[i] << "  ";
        } else {
            std::cout << "                          ";
        }
        if (i < info.size()) {
            std::cout << "  " << info[i];
        }
        std::cout << std::endl;
    }

    std::cout << "" << std::endl;

    return 0;
}
