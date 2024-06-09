# Loading .zshrc
source ~/.zshrc

# Enable alias
shopt -s expand_aliases

# Files used
LIB_FILE="libft.a"
SRC_FILE="test.c"
EXE_FILE="a.out"

# Compile
ccw SRC_FILE LIB_FILE

# Execution
if [$? -eq 0]; then
	./EXE_FILE
else
	echo "Compilation failed."
