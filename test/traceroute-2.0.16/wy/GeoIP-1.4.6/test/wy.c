#include <GeoIP.h>
#include <stdio.h>

int main (int argc, char *argv[]) {
  GeoIP * gi;
  gi = GeoIP_new(GEOIP_STANDARD);
  printf("code %s\n",
    GeoIP_country_code_by_name(gi, argv[1]));
}
