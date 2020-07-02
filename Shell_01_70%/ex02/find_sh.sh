find . -type f -name "*.sh" | sed 's/\.sh//g' | rev | sed 's/\/.*$//g' | rev
