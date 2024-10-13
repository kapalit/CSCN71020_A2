#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RectangleUnitTest
{
    TEST_CLASS(RectangleUnitTest)
    {
    public:
        // Function declarations
        int getPerimeter(int* length, int* width);
        int getArea(int* length, int* width);
        void setLength(int input, int* length);
        void setWidth(int input, int* width);

        // Test for getPerimeter
        TEST_METHOD(TestGetPerimeter)
        {
            int length = 0;
            int width = 0;
            Assert::AreEqual(16, getPerimeter(&length, &width));
        }

        // Test for getArea
        TEST_METHOD(TestGetArea)
        {
            int length = 0;
            int width = 0;
            Assert::AreEqual(15, getArea(&length, &width));
        }

        // Test for setLength
        TEST_METHOD(TestSetLengthValid)
        {
            int length = 0;
            setLength(50, &length);
            Assert::AreEqual(50, length);
        }

        TEST_METHOD(TestSetLengthBoundary)
        {
            int length = 0;
            setLength(1, &length);
            Assert::AreEqual(1, length);
            setLength(99, &length);
            Assert::AreEqual(99, length);
        }

        TEST_METHOD(TestSetLengthInvalid)
        {
            int length = 0;
            setLength(100, &length); // Out of range
            Assert::AreEqual(0, length); // Should not change
            setLength(-1, &length);
            Assert::AreEqual(0, length);
        }

        // Test for setWidth
        TEST_METHOD(TestSetWidthValid)
        {
            int width = 0;
            setWidth(30, &width);
            Assert::AreEqual(30, width);
        }

        TEST_METHOD(TestSetWidthBoundary)
        {
            int width = 0;
            setWidth(1, &width);
            Assert::AreEqual(1, width);
            setWidth(99, &width);
            Assert::AreEqual(99, width);
        }

        TEST_METHOD(TestSetWidthInvalid)
        {
            int width = 0;
            setWidth(100, &width); // Out of range
            Assert::AreEqual(0, width); // Should not change
            setWidth(-1, &width);
            Assert::AreEqual(0, width);
        }

    };




