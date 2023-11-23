#include "pch.h"
#include "CppUnitTest.h"
#include"..\\lab13.2\lab.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#define MAX(x, y, z) (((x) - (y)) > ((y) - (z)) ? ((x) - (y)) : ((y) - (z)))

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            // Arrange
            double x = 4.0;
            double y = 9.0;
            double z = 3.0;

            // Act
            double result = MAX(x, y, z);

            // Assert
            Assert::AreEqual(6.0, result);
        
		}
	};
}
