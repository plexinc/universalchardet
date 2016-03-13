OBJS = \
		CharDistribution.o \
		JpCntx.o \
		LangBulgarianModel.o \
		LangCyrillicModel.o \
		LangGreekModel.o \
		LangHungarianModel.o \
		LangHebrewModel.o \
		LangThaiModel.o \
		nsHebrewProber.o \
		nsCharSetProber.o \
		nsBig5Prober.o \
		nsEUCJPProber.o \
		nsEUCKRProber.o \
		nsEUCTWProber.o \
		nsEscCharsetProber.o \
		nsEscSM.o \
		nsGB2312Prober.o \
		nsMBCSGroupProber.o \
		nsMBCSSM.o \
		nsSBCSGroupProber.o \
		nsSBCharSetProber.o \
		nsSJISProber.o \
		nsUTF8Prober.o \
		nsLatin1Prober.o \
		nsUniversalDetector.o

libuniversalchardet.a : $(OBJS)
	ar rvs libuniversalchardet.a $(OBJS)
	ranlib libuniversalchardet.a

install:
	install -d $(PREFIX)/include/universalchardet
	install *.h $(PREFIX)/include/universalchardet/
	install libuniversalchardet.a $(PREFIX)/lib/

clean:
	rm $(OBJS)

%.obj : %.cpp
	$(CXX) $(CXXFLAGS) –c $(.SOURCE
