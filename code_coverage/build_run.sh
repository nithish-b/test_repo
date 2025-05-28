g++ \
    -I./lib/googletest/googletest/include \
    -I./lib/googletest/googlemock/include \
    -L./lib/googletest/build/lib \
    ./src/calculator.cpp \
    ./test/calculator_test.cpp \
    -o test_runner \
    -lgtest -lgtest_main \
    -pthread

./test_runner
if [ $? -eq 0 ]; then
    echo "Tests passed successfully."
else
    echo "Tests failed."
fi
