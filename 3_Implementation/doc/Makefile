PROJECT_DOXY_FILE = Calc_Doxyfile

ifdef OS
   RM = del /q
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
   endif
endif

doc: $(PROJECT_DOXY_FILE)
	doxygen ./$^

clean:
	$(RM) html*