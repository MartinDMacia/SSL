all: test tablasDeConversion

tablasDeConversion: conversion.o
	gcc tablasDeConversion.c conversion.o -o tablasDeConversion

conversion.o: conversion.c
	gcc -c conversion.c

conversionTests: conversionTests.c
	gcc conversionTests.c conversion.o -o conversionTests

test: conversionTests
	./conversionTests 