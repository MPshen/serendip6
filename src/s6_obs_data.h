#ifndef _S6_OBS_DATA_H
#define _S6_OBS_DATA_H

typedef struct scram {
    int     PNTSTIME;
    double  PNTRA;   
    double  PNTDEC;  
    double  PNTMJD;  
    int     AGCSTIME;
    int     AGCTIME; 
    double  AGCAZ;   
    double  AGCZA;   
    double  AGCLST;  
    int     ALFSTIME;
    int     ALFBIAS1;
    int     ALFBIAS2;
    double  ALFMOPOS;
    int     IF1STIME;
    double  IF1SYNHZ;
    int     IF1SYNDB;
    double  IF1RFFRQ;
    double  IF1IFFRQ;
    int     IF1ALFFB;
    int     IF2STIME;
    int     IF2ALFON;
    int     TTSTIME; 
    int     TTTURENC;
    double  TTTURDEG;
    int     DERTIME;
    double  ra_by_beam[7];      // TODO should be N_BEAMS
    double  dec_by_beam[7];
} scram_t;

int get_obs_info_from_redis(scram_t *scram, char *hostname, int port);

#endif  // _S6_OBS_DATA_H
