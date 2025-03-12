set(HDRS
    CharDistribution.h
    JpCntx.h
    nsBig5Prober.h
    nsCharSetProber.h
    nsCodingStateMachine.h
    nscore.h
    nsEscCharsetProber.h
    nsEUCJPProber.h
    nsEUCKRProber.h
    nsEUCTWProber.h
    nsGB2312Prober.h
    nsHebrewProber.h
    nsLatin1Prober.h
    nsMBCSGroupProber.h
    nsPkgInt.h
    nsSBCharSetProber.h
    nsSBCSGroupProber.h
    nsSJISProber.h
    nsUniversalDetector.h
    nsUTF8Prober.h
    prmem.h)

target_sources(${PROJECT_NAME} PUBLIC FILE_SET public_headers TYPE HEADERS
                                      FILES ${HDRS})
