
CXX = g++
BUILD_DIRECTORY=build/
LIB_INC = "./inc"
LIB_BINARY = "."
$(BUILD_DIRECTORY)app: $(BUILD_DIRECTORY)main.o 
	@$(CXX) $^  -o $(BUILD_DIRECTORY)app -I $(LIB_INC) -pthread -llogger -L $(LIB_BINARY) 
	
$(BUILD_DIRECTORY)main.o: main.cpp $(BUILD_DIRECTORY)
	@$(CXX) --std=c++17 -c main.cpp -o $(BUILD_DIRECTORY)main.o


$(BUILD_DIRECTORY):
	@mkdir build
clean:
	@rm -rf $(BUILD_DIRECTORY)
