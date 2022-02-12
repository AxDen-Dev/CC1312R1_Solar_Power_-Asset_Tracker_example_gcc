#ifndef QUECTEL_DEFINE_H_
#define QUECTEL_DEFINE_H_

#define GPRMC_HEADER "$GPRMC"
#define GPVTG_HEADER "$GPVTG"
#define GPGGA_HEADER "$GPGGA"
#define GPGSA_HEADER "$GPGSA"
#define GPGSV_HEADER "$GPGSV"
#define GPGLL_HEADER "$GPGLL"

#define PMTK_ACK_HEADER "$PMTK001"
#define PMTK_SBAS_DISABLE "$PMTK313,0*2F\r\n"
#define PMTK_NEMA_OUTPUT_DISABLE_GGA_ONLY "$PMTK314,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0*29\r\n"

#endif /* QUECTEL_DEFINE_H_ */