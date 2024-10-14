#include "pch.h" 
#include "CppUnitTest.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C" {
    // Function declarations from your rectangle implementation
    int getPerimeter(int* length, int* width);
    int getArea(int* length, int* width);
    void setLength(int input, int* length);
    void setWidth(int input, int* width);
}

namespace RectangleUnitTest
{
    TEST_CLASS(RectangleUnitTest)
    {
    public:

        // Test for getPerimeter
        TEST_METHOD(TestgetPerimeter)
        {
            int length = 4; // Set to a valid length
            int width = 4;  // Set to a valid width
            Assert::AreEqual(16, getPerimeter(&length, &width)); // 2 * (length + width) = 16
        }

        // Test for getArea
        TEST_METHOD(TestgetArea)
        {
            int length = 5; // Set to a valid length
            int width = 2;  // Set to a valid width
            Assert::AreEqual(10, getArea(&length, &width)); // length * width = 10
        }

        // Test for setLength
        TEST_METHOD(TestsetLengthValid)
        {
            int length = 0;
            setLength(60, &length);
            Assert::AreEqual(60, length);
        }

        TEST_METHOD(TestsetLengthBoundary)
        {
            int length = 0;
            setLength(0, &length);
            Assert::AreEqual(0, length);
            setLength(99, &length);
            Assert::AreEqual(99, length);
        }

        TEST_METHOD(TestsetLengthInvalid)
        {
            int length = 0;
            setLength(100, &length); // Out of range
            Assert::AreEqual(0, length); // Should not change
            setLength(-1, &length);
            Assert::AreEqual(0, length);
        }

        // Test for setWidth
        TEST_METHOD(TestsetWidthValid)
        {
            int width = 0;
            setWidth(30, &width);
            Assert::AreEqual(30, width);
        }

        TEST_METHOD(TestsetWidthBoundary)
        {
            int width = 0;
            setWidth(1, &width);
            Assert::AreEqual(1, width);
            setWidth(99, &width);
            Assert::AreEqual(99, width);
        }

        TEST_METHOD(TestsetWidthInvalid)
        {
            int width = 99;
            setWidth(5, &width); // Out of range
            Assert::AreEqual(5, width); // Should not change
            setWidth(-1, &width);
            Assert::AreEqual(5, width);
        }
    };
}

