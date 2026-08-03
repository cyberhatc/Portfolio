#!/bin/bash

T='\e[36m'   # teal
G='\e[32m'   # green for logo
R='\e[0m'    # reset

# ASCII art logo - stylized skull/hacker logo
logo=(
"${G}         .-/+oossssoo+/-.        ${R}"
"${G}     \`:+ssssssssssssssssss+:\`     ${R}"
"${G}   .+ssssssssssssssssssssssss+.    ${R}"
"${G}  +sssssssssssssssssssssssssss+   ${R}"
"${G} +ssssssssssssssssssssssssssss+  ${R}"
"${G} +ssssssssssssssssssssssssssss+  ${R}"
"${G} .ssssssssssssssssssssssssssss.  ${R}"
"${G}  hNNNNNNNNNNNNNNNNNNNNNNNNh    ${R}"
"${G}  hNNNNMMNNNNNNNNNNNNNNNNNh    ${R}"
"${G}  hNNNNMMNNNNNNNNNNNNNNNNh     ${R}"
"${G}  hNNNNNNNNNNNNNNNNNNNNNNh     ${R}"
"${G}  hNNNNMMNNNNNNNNNNNNNNNNh     ${R}"
"${G}  hNNNNMMNNNNNNNNNNNNNNNNNh    ${R}"
"${G}  hNNNNNNNNNNNNNNNNNNNNNNNNh   ${R}"
"${G}  \`+ssssssssssssssssssssss+    ${R}"
"${G}   .ssssssssssssssssssssss.     ${R}"
"${G}    +sssssssssssssssssss+       ${R}"
"${G}     \`:+ssssssssssssss+:\`       ${R}"
"${G}         .-/+oossssoo+/-.       ${R}"
)

# System info lines
info=(
"${T}OS${R}: HackOS 6.8.0-cyber x86_64"
"${T}Host${R}: devil_Mike Workstation"
"${T}Kernel${R}: 6.8.0-cyber"
"${T}Uptime${R}: since age 14"
"${T}Shell${R}: /bin/zsh 5.9"
"${T}WM${R}: i3-gaps"
"${T}CPU${R}: devil_Mike @ 5.1GHz"
"${T}Memory${R}: 5x hackathon runner-up"
)

# Print header
echo ""
printf "${T}cyberhatc@devil_Mike${R}\n"
printf "${T}--------------------${R}\n"

# Print logo and info side by side
for i in "${!logo[@]}"; do
    printf "  ${logo[$i]}  "
    if [ $i -lt ${#info[@]} ]; then
        printf "  ${info[$i]}"
    fi
    echo ""
done

# Print remaining info lines if logo is longer
if [ ${#info[@]} -gt ${#logo[@]} ]; then
    for ((i=${#logo[@]}; i<${#info[@]}; i++)); do
        printf "                          "
        printf "  ${info[$i]}"
        echo ""
    done
fi

echo ""
