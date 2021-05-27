.DEFAULT_GOAL 	:= help

view: ## display the Makefile
	@cat Makefile

edit: ## open the Makefile with `code`
	@code Makefile

test: ## run the test suit
	@cmake -S src/ -B build
	@cmake --build build
	@cd build && ctest

main: ## Run fizzbuzz from cmd
	@g++ src/fizzbuzz.cpp src/main.cpp -o main.out
	@./main.out

clear: ## Delete all build files
	@rm -rf build main.out

help: ## Show this help
	@grep -E '^[a-zA-Z_-]+:.*?## .*$$' $(MAKEFILE_LIST) | awk 'BEGIN {FS = ":.*?## "}; {printf "\033[36m%-30s\033[0m %s\n", $$1, $$2}'

