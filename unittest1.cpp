#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestingStudent
{
	TEST_CLASS(TestModuleClass)
	{
	public:

		TEST_METHOD(TestModuleCustomConstructor) {
			//Arrange
			Module A{ "acting101", "ACT101", 20, 45 };
			std::string expected{ "acting101 ACT101 20 45" };
			std::string actual{};

			//Act
			actual = A.getModuleTitle();
			actual = A.getModuleCode();
			actual = A.getModuleCreditPoints();
			actual = A.getModuleMark();


			//Assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestgetModuleCode) {
			//Arrange
			Module C;
			C.getModuleCode();
			std::string expected{ "ACT101" };
			std::string actual = C.setModuleCode;

			//Act
			actual = C.getModuleCode();



			//Assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestsetModuleCode) {
			//Arrange
			Module C;
			C.setModuleCode("ACT101");
			std::string expected{ "ACT101" };
			std::string actual = C.setModuleCode;

			//Act
			actual = C.getModuleCode();



			//Assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestgetModuleCreditPoints) {
			//Arrange
			Module M;
			int getModuleCreditPoints(20);
			int expected{ 20 };
			int actual = M.setModuleCreditPoints;

			//Act
			actual = M.getModuleCreditPoints();



			//Assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestsetModuleCreditPoints) {
			//Arrange
			Module M;
			int getModuleCreditPoints(20);
			int expected{ 20 };
			int actual = M.setModuleCreditPoints;

			//Act
			actual = M.getModuleCreditPoints();



			//Assert
			Assert::AreEqual(expected, actual);
		}

	};

}