
CXX = g++
BUILD_DIRECTORY=build/

$(BUILD_DIRECTORY)logger: $(BUILD_DIRECTORY)ExcelManger.o $(BUILD_DIRECTORY)Logger.o
	@ar rcs $(BUILD_DIRECTORY)liblogger.a  $^ 
	
$(BUILD_DIRECTORY)ExcelManger.o: ExcelManger.cpp $(BUILD_DIRECTORY)
	@$(CXX) --std=c++17 -c ExcelManger.cpp -o $(BUILD_DIRECTORY)ExcelManger.o

$(BUILD_DIRECTORY)Logger.o: Logger.cpp $(BUILD_DIRECTORY)
	@$(CXX) --std=c++17 -c Logger.cpp -o $(BUILD_DIRECTORY)Logger.o

$(BUILD_DIRECTORY):
	@mkdir build
clean:
	@rm -rf $(BUILD_DIRECTORY)
