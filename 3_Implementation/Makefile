PROJ_NAME = Calculator_Calcy
TEST_PROJ_NAME = Test_$(PROJ_NAME)

BUILD_DIR = Build

SRC=./src/simple_calculations.c\
./src/matrix_calculations.c\
./src/trigonometric_calculations.c

# ./src/timeDelay.c

TSRC=simple_calculations.gcno\
matrix_calculations.gcno\
trigonometric_calculations.gcno

TEST_SRC = test/test_calcy.c\
unity/unity.c

INC=-I inc\
-I unity

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

.PHONY : all test coverage run clean doc

all:$(BUILD_DIR)
	gcc main.c $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC)) -lm

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

test: $(SRC) $(TEST_SRC)
	gcc $^ $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC)) -lm
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

coverage:${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(TEST_SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC)) -lm
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	

ccheck:
	cppcheck --enable=all main.c $(SRC) $(INC)

sani: $(SRC) $(TEST)
	gcc $(INC) $(TEST) $(SRC) -o $(PROJ_NAME).out -fsanitize=address -static-libasan

doc:
	make -C doc
$(BUILD_DIR):
	mkdir $(BUILD_DIR)

clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)
	make clean -C doc
	rmdir $(BUILD_DIR) doc/html































# BUILD_DIR = Build

# CC=gcc

# CFLAGS=-c
# CCFLAGS=-g -Wall

# SRC=./src/simple_calculations.c\
# ./src/timeDelay.c\
# ./src/matrix_calculations.c\
# ./src/trigonometric_calculations.c

# TEST_SRC = test/test_calcy.c\
# unity/unity.c

# INC=-I inc\
# -I unity


# ifdef OS
#    RM = del /q
#    FixPath = $(subst /,\,$1)
#    EXEC = exe
# else
#    ifeq ($(shell uname), Linux)
#       RM = rm -rf
#       FixPath = $1
# 	  EXEC = out
#    endif
# endif


# all: main

# # %.o: %.c
# # 	$(CC) $(CFLAGS) $(CCFLAGS) $<

# main: main.o simple_calculations.o
# # 	$(CC) -o main main.o calc.o
# #   Below command: 
# #   gcc main.c ./src/simple_calculations.c ./src/timeDelay.c ./src/matrix_calculations.c ./src/trigonometric_calculations.c -I inc -o main
# 	$(CC) main.c $(SRC) $(INC) -o main

# main.o: main.c
# #   Below command:
# #   gcc -c  main.c
# 	$(CC) $(CFLAGS) main.c

# simple_calculations.o: $(SRC)
# #   Below command:
# #   gcc -c ./src/simple_calculations.c ./src/timeDelay.c ./src/matrix_calculations.c ./src/trigonometric_calculations.c
# 	$(CC) $(CFLAGS) $(SRC)

# timeDelay.o:


# clean:
# 	$(RM) *.exe *.o






# all: cal

# cal: main.o func1.o func2.o
# 	$(CC) main.c func1.c func2.c -o cal

# main.o: main.c
# 	$(CC) $(CFLAGS) main.c

# func1.o: func1.c
# 	$(CC) $(CFLAGS) func1.c
	
# func2.o: func2.c
# 	$(CC) $(CFLAGS) func2.c


