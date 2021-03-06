/**The MIT License (MIT)
Copyright (c) 2017 by Daniel Eichhorn
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
See more at http://blog.squix.ch
*/

#if LANG == 'EN'
  const char TEXT_REFRESH_BUTTON[] PROGMEM     = "REFRESH";
  const char TEXT_CONFIG_BUTTON[] PROGMEM      = "CONFIG + RST";
  const char TEXT_UPDATED[]                    = " (each: %d min)";
  const char TEXT_SUN[] PROGMEM                = "Sun:";
  const char TEXT_MOON[] PROGMEM               = "Moon:";
  const char TEXT_PHASE[] PROGMEM              = "Phase:";
  const char TEXT_REFRESHING[] PROGMEM         = "Refreshing data...";
  const char TEXT_BLOCKED_ADS[] PROGMEM        = "Ads Blocked Today:";
  const char TEXT_QUERYING_PIHOLE_L1[] PROGMEM = "Querying Pi-Hole & refreshing";
  const char TEXT_QUERYING_PIHOLE_L2[] PROGMEM = "     weather data";
#elif LANG == 'DE'
  const char TEXT_REFRESH_BUTTON[] PROGMEM     = "AKTUALISIEREN";
  const char TEXT_CONFIG_BUTTON[] PROGMEM      = "CONFIG + RST";
  const char TEXT_UPDATED[]                    = " (each: %d min)";
  const char TEXT_SUN[] PROGMEM                = "Sonne:";
  const char TEXT_MOON[] PROGMEM               = "Mond:";
  const char TEXT_PHASE[] PROGMEM              = "Phase:";
  const char TEXT_REFRESHING[] PROGMEM         = "Refreshing data...";
  const char TEXT_BLOCKED_ADS[] PROGMEM        = "Ads Blocked Today:";
  const char TEXT_QUERYING_PIHOLE_L1[] PROGMEM = "Querying Pi-Hole & refreshing";
  const char TEXT_QUERYING_PIHOLE_L2[] PROGMEM = "     weather data";
#elif LANG == 'FR'
  const char TEXT_REFRESH_BUTTON[] PROGMEM     = "ACTUALISER";
  const char TEXT_CONFIG_BUTTON[] PROGMEM      = "CONFIG + RST";
  const char TEXT_UPDATED[]                    = " (MaJ %d min)";
  const char TEXT_SUN[] PROGMEM                = "Soleil:";
  const char TEXT_MOON[] PROGMEM               = "Lune:";
  const char TEXT_PHASE[] PROGMEM              = "Phase:";
  const char TEXT_REFRESHING[] PROGMEM         = "Mise à jour des données...";
  const char TEXT_BLOCKED_ADS[] PROGMEM        = "Pub bloqués Ajd:";
  const char TEXT_QUERYING_PIHOLE_L1[] PROGMEM  = "Récupération des données";
  const char TEXT_QUERYING_PIHOLE_L2[] PROGMEM = "    météo & Pi-Hole";
#endif
