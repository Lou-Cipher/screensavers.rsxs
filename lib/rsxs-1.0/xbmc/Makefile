ARCH=x86-osx
CXXFLAGS=-fPIC

.PHONY: compile

OUTDIR=/Users/tobiasmarkus1/workspace/xbmc/addons
RSXS=..

DIRS=$(RSXS)

RSXS-OBJS=$(RSXS)/src/common.o $(RSXS)/src/color.o $(RSXS)/lib/libmisc.a

SOLARWINDS-OUT=$(OUTDIR)/screensaver.rsxs.solarwinds/Solarwinds.xbs
SOLARWINDS-DEP=$(RSXS)/src/solarwinds/rs-solarwinds

PLASMA-OUT=$(OUTDIR)/screensaver.rsxs.plasma/Plasma.xbs
PLASMA-DEP=$(RSXS)/src/plasma/rs-plasma

EUPHORIA-OUT=$(OUTDIR)/screensaver.rsxs.euphoria/Euphoria.xbs
EUPHORIA-DEP=$(RSXS)/src/euphoria/rs-euphoria

CLEAN_FILES=$(SOLARWINDS-OUT) $(PLASMA-OUT) $(EUPHORIA-OUT)

all: $(SOLARWINDS-OUT) $(PLASMA-OUT) $(EUPHORIA-OUT);

$(SOLARWINDS-OUT): $(SOLARWINDS-DEP)
ifeq ($(findstring osx,$(ARCH)), osx)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -bundle -flat_namespace -undefined dynamic_lookup \
		-o $(SOLARWINDS-OUT) $(RSXS)/src/solarwinds/*.o $(RSXS-OBJS)
else
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -shared -o $(SOLARWINDS-OUT) $(RSXS)/src/solarwinds/*.o $(RSXS-OBJS) -lXmu -lGL -lX11 -lGLU
endif

$(PLASMA-OUT): $(PLASMA-DEP)
ifeq ($(findstring osx,$(ARCH)), osx)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -bundle -flat_namespace -undefined dynamic_lookup \
		-o $(PLASMA-OUT)     $(RSXS)/src/plasma/*.o     $(RSXS-OBJS)
else
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -shared -o $(PLASMA-OUT)     $(RSXS)/src/plasma/*.o     $(RSXS-OBJS) -lXmu -lGL -lX11 -lGLU
endif

$(EUPHORIA-OUT): $(EUPHORIA-DEP)
ifeq ($(findstring osx,$(ARCH)), osx)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -bundle -flat_namespace -undefined dynamic_lookup \
		-o $(EUPHORIA-OUT)   $(RSXS)/src/euphoria/*.o   $(RSXS)/src/pngimage.o $(RSXS-OBJS) -lpng
else
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -shared -o $(EUPHORIA-OUT)   $(RSXS)/src/euphoria/*.o   $(RSXS)/src/pngimage.o $(RSXS-OBJS) -lXmu -lpng -lGL -lX11 -lGLU
endif

$(SOLARWINDS-DEP) : $(RSXS)
$(PLASMA-DEP)     : $(RSXS)
$(EUPHORIA-DEP)   : $(RSXS)

$(RSXS): compile
	$(MAKE) -C $(RSXS)

include /Users/tobiasmarkus1/workspace/xbmc/Makefile.include

