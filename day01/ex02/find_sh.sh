find . -name "*.sh" | rev | cut -d . -f 2 | rev | xargs -n 1 basename
