main:
	@echo "Not a valid command. To ingore all executables from git, use the following commands"
	@echo "	excludeA - will append the files to exclude to .gitignore" 
	@echo "	excludeA - will overwrite .gitignore with the files to exclude"
	@echo "The modified .gitignore file is the one in the root folder (ludum)"

excludeA: 
	find . -executable -type f -not -path "*/.git/*" >>.gitignore

excludeO:
	find . -executable -type f -not -path "*/.git/*" >.gitignore

.PHONY: excludeA excludeO
