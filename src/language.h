#ifndef LANGUAGE_H
#define LANGUAGE_H

// [number of languages][number of texts]

static const char* const myLanguage[3][330] PROGMEM = {
  { "English", // English
    "Rotary direction changed", // 1
    "Please release button", // 2
    "Screen flipped", // 3
    "Calibrate analog meter", // 4
    "USB mode", // 5
    "Encoder set to optical", // 6
    "Encoder set to standard", // 7
    "FM/AM receiver", // 8
    "Tuner: !None!", // 9
    "Volume", // 10
    "Converter", // 11
    "Low band edge", // 12
    "High band edge", // 13
    "FM RF Level offset", // 14
    "Stereo threshold", // 15
    "High Cut corner", // 16
    "Highcut threshold", // 17
    "Low level threshold", // 18
    "Brightness", // 19
    "Set volume", // 20
    "Converter offset", // 21
    "Low band edge", // 22
    "High band edge", // 23
    "Level offset", // 24
    "Stereo separation threshold", // 25
    "High cut corner frequency", // 26
    "High cut threshold", // 27
    "Low level threshold", // 28
    "Display brightness", // 29
    "Off", // 30
    "On", // 31
    "PRESS MODE TO EXIT AND STORE", // 32
    "PRESS BAND TO CLOSE", // 33
    "SCANNING...", // 34
    "Tuner not detected", // 35
    "AM Antenna gain", // 36
    "FM AGC", // 37
    "Show RDS errors", // 38
    "Language", // 39
    "Choose language", // 40
    "PI locked CT sync", // 41
    "Error! No RDS signal", // 42
    "Softmute FM", // 43
    "Softmute AM", // 44
    "Beep at band edge", // 45
    "Region", // 46
    "Europe", // 47
    "USA", // 48
    "Show underscore in RDS", // 49
    "PS only", // 50
    "Wi-Fi active", // 51
    "Configure Wi-Fi", // 52
    "Connect to: ", // 53
    "to configure Wi-Fi", // 54
    "Trying to connect Wi-Fi", // 55
    "FAILED!", // 56
    "CONNECTED!", // 57
    "Stationlist client IP", // 58
    "Show SW wavelength", // 59
    "RDS filter", // 60
    "Show PI errors", // 61
    "Use squelch", // 62
    "Audio level meter", // 63
    "AM Noise blanker", // 64
    "FM Noise blanker", // 65
    "Defaults loaded", // 66
    "Audio output", // 67
    "Allow tuning without\ndeactivating screensaver", // 68
    "Invert display colors", // 69
    "About software", // 70
    "Main code:", // 71
    "Contributors:", // 72
    "Unknown", // 73
    "Screensaver options", // 74
    "Auto Power off", // 75
    "Screen off", // 76
    "Theme", // 77
    "Skin", // 78
    "Detected applications", // 79
    "Min.", // 80
    "Dynamic SPI speed", // 81
    "Scan sensitivity", // 82
    "NONE", // 83
    "Software version", // 84
    "Frequency font", // 85
    "Auto", // 86
    "No AF available", // 87
    "No EON available", // 88
    "No RT+ available", // 89
    "FM default stepsize", // 90
    "Screensaver", // 91
    "Sec", // 92
    "Clock mode", // 93
    "1% brightness", // 94
    "25% brightness", // 95
    "50% brightness", // 96
    "AM RF Level offset", // 97
    "Signalmeter unit", // 98
    "Use AF", // 99
    "Select FM Band", // 100
    "Select AM Band", // 101
    "LW", // 102
    "MW", // 103
    "SW", // 104
    "FM", // 105
    "OIRT", // 106
    "Stop screen wake on tune", // 107
    "Model selector", // 108
    "Base", // 109
    "Portable", // 110
    "Portable touch", // 111
    "Title", // 112
    "Album", // 113
    "Track", // 114
    "Artist", // 115
    "Composition", // 116
    "Movement", // 117
    "Conductor", // 118
    "Composer", // 119
    "Band", // 120
    "Comment", // 121
    "Genre", // 122
    "News", // 123
    "Local news", // 124
    "Stockmarket", // 125
    "Sport", // 126
    "Lottery", // 127
    "Horoscope", // 128
    "Daily Diversion", // 129
    "Health", // 130
    "Event", // 131
    "Scene", // 132
    "Cinema", // 133
    "TV", // 134
    "Date/time", // 135
    "Weather", // 136
    "Traffic", // 137
    "Alarm", // 138
    "Advertisement", // 139
    "Website", // 140
    "Other", // 141
    "Short PS", // 142
    "Long PS", // 143
    "Now", // 144
    "Next", // 145
    "Part", // 146
    "Host", // 147
    "Editor", // 148
    "Frequency", // 149
    "Homepage", // 150
    "Subchannel", // 151
    "Hotline", // 152
    "Studio phone", // 153
    "Phone", // 154
    "SMS studio", // 155
    "SMS", // 156
    "Email hotline", // 157
    "Email studio", // 158
    "Email", // 159
    "Chat", // 160
    "Chat centre", // 161
    "Vote question", // 162
    "Vote centre", // 163
    "Place", // 164
    "Appointment", // 165
    "Identifier", // 166
    "Purchase", // 167
    "Get data", // 168
    "MW default stepsize", // 169
    "Tangerine", // 170
    "Ocean", // 171
    "Indigo", // 172
    "Battery options", // 173
    "Show voltage", // 174
    "Show percentage", // 175
    "RT buffering", // 176
    "Main settings", // 177
    "Audio settings", // 178
    "Display settings", // 179
    "RDS settings", // 180
    "FM settings", // 181
    "AM settings", // 182
    "Connectivity & clock", // 183
    "PRESS MODE TO RETURN", // 184
    "CoChannel Detector", // 185
    "CoChannel Detector\nsensitivity", // 186
    "CoChannel Detector\nthreshold", // 187
    "CoChannel Detector\ncounter", // 188
    "MAIN", // 189
    "AUDIO", // 190
    "DISPLAY", // 191
    "RDS", // 192
    "FM", // 193
    "AM", // 194
    "CONNECT", // 195
    "DX MODE", // 196
    "AUTO MEM", // 197
    "AM AGC", // 198
    "FM deemphasis", // 199
    "Small", // 200
    "Large", // 201
    "All", // 202
    "Fast PS", // 203
    "Default", // 204
    "Mute screen on\nXDRGTK connection", // 205
    "FMSI stereo\nimprovement", // 206
    "Function only available\non TEF6687/6689!", // 207
    "Function not available\non selected skin!", // 208
    "Begin scanning\nmemory channels", // 209
    "Stop scanning\nmemory channels", // 210
    "Wait time", // 211
    "Start DX scanning", // 212
    "FM DX Options", // 213
    "Abort! The start channel\nis marked as skipped.", // 214
    "Auto sort AF", // 215
    "Memory channels", // 216
    "Exclude", // 217
    "Only", // 218
    "Auto cancel scan", // 219
    "Correct PI", // 220
    "Signal", // 221
    "Mute audio\nwhile scanning", // 222
    "AIR", // 223
    "5 sec. bandbutton press", // 224
    "Power off", // 225
    "Screen off", // 226
    "Disabled", // 227
    "None", // 228
    "News", // 229
    "Current Affairs", // 230
    "Information", // 231
    "Sport", // 232
    "Education", // 233
    "Drama", // 234
    "Culture", // 235
    "Science", // 236
    "Varied", // 237
    "Pop Music", // 238
    "Rock Music", // 239
    "Easy Listening", // 240
    "Light Classical", // 241
    "Serious Classical", // 242
    "Other Music", // 243
    "Weather", // 244
    "Finance", // 245
    "Children's Progs", // 246
    "Social Affairs", // 247
    "Religion", // 248
    "Phone-In", // 249
    "Travel", // 250
    "Leisure", // 251
    "Jazz Music", // 252
    "Country Music", // 253
    "National Music", // 254
    "Oldies Music", // 255
    "Folk Music", // 256
    "Documentary", // 257
    "Alarm Test", // 258
    "Alarm!!!", // 259
    "Initial", // 260
    "Always", // 261
    "Show clock", // 262
    "Show long PS", // 263
    "Start frequency", // 264
    "Stop frequency", // 265
    "Start memory channel", // 266
    "Stop memory channel", // 267
    "Only store with RDS", // 268
    "Start auto memory", // 269
    "Auto memory", // 270
    "Stationlist ID", // 271
    "Found", // 272
    "Abort! Out of memorychannels", // 273
    "Abort! User pressed button", // 274
    "Scan finished without errors", // 275
    "Clear memory channels", // 276
    "cleared", // 277
    "Prevent double PI", // 278
    "Range", // 279
    "Full", // 280
    "Wait time on\nsignal only", // 281
    "Press highlighted corner", // 282
    "To calibrate touchscreen", // 283
    "Hold BW button to\nstop DX scanner", // 284
    "Select Bandwidth", // 285
    "Your logbook", // 286
    "Download logbook", // 287
    "Logbook is empty", // 288
    "Go to bottom", // 289
    "Entry added\nto the logbook", // 290
    "Error adding\nentry to the logbook", // 291
    "Clear logbook", // 292
    "Logbook cleared", // 293
    "Clear failed", // 294
    "Can't add entry!\nLogbook is full!", // 295
    "Autologger", // 296
    "Auto DST on NTP time", // 297
    "Set NTP time offset", // 298
    "The logbook contains over 130 entries, which the viewer cannot process. Please download the CSV file to process it.", // 299
    "Canada", // 300
    "Connect this device to a WiFi network to enable remote features.", // 301
    "Configure WiFi", // 302
    "Hidden network", // 303
    "WiFi Network Name", // 304
    "Enter SSID or tap a network above", // 305
    "Password", // 306
    "Enter password", // 307
    "Save and Connect", // 308
    "Scan again", // 309
    "Connecting to", // 310
    "Connected to", // 311
    "You may now close this page.", // 312
    "Could not connect to", // 313
    "Click here to try again", // 314
    "Options", // 315
    "Select WiFi", // 316
    "No networks found. Refresh to scan again.", // 317
    "Credentials Saved", // 318
    "Set XDRGTK password (max 8 characters)", // 319
    "Set rabbitears.info live bandscan user ID", // 320
    "Set rabbitears.info password", // 321
    "ID", // 322
    "DHCP", // 323
    "IP address", // 324
    "Subnet mask", // 325
    "Gateway", // 326
    "Direct tuning", // 327
    "Battery almost empty", // 328
    "PRESS ANY BUTTON TO CLOSE" // 329
  },
  { "Deutsch", // German
    "Richtung des Drehimpuls-\ngebers wird umgekehrt", // 1
    "Bitte Taste loslassen", // 2
    "Bildschirm wird\num 180° gedreht", // 3
    "Analogmeter\nwird kalibrieret", // 4
    "USB-Modus", // 5
    "Drehimpulsgeber wechselt\nin optischen Modus", // 6
    "Drehimpulsgeber wechselt\nin Standard-Modus", // 7
    "UKW/AM Empfänger", // 8
    "Tuner: !Keiner!", // 9
    "Lautstärke", // 10
    "Konverter", // 11
    "Unteres Bandende", // 12
    "Oberes Bandende", // 13
    "UKW RF-Pegeloffset", // 14
    "Stereo-Trennschwelle", // 15
    "Tiefpass-Eckfrequenz", // 16
    "Tiefpass-Schwelle", // 17
    "Low-Level-Schwelle", // 18
    "Bildschirmhelligkeit", // 19
    "Lautstärke einstellen", // 20
    "Konverteroffset", // 21
    "Unteres Bandende", // 22
    "Oberes Bandende", // 23
    "Pegeloffset", // 24
    "Stereo-Trennschwelle", // 25
    "Tiefpass-Eckfrequenz", // 26
    "Tiefpass-Schwelle", // 27
    "Low-Level-Schwelle", // 28
    "Bildschirmhelligkeit", // 29
    "Aus", // 30
    "Ein", // 31
    "DRÜCKE MODE ZUM VERLASSEN & SPEICHERN", // 32
    "DRÜCKE BAND ZUM SCHLIESSEN", // 33
    "SCANVORGANG\nLÄUFT...", // 34
    "Tuner nicht erkannt", // 35
    "AM Antennengewinn", // 36
    "UKW AGC", // 37
    "Zeige RDS-Fehler", // 38
    "Sprache", // 39
    "Sprache wählen", // 40
    "PI-Vorgabe für\nCT-Synchronisation", // 41
    "Fehler! Kein RDS-Signal", // 42
    "Sanfte\nStummschaltung UKW", // 43
    "Sanfte\nStummschaltung AM", // 44
    "Piepston am Bandende", // 45
    "Region", // 46
    "Europa", // 47
    "USA", // 48
    "Zeige Unterstrich im RDS", // 49
    "Nur PS", // 50
    "WLAN aktiv", // 51
    "WLAN konfigurieren", // 52
    "Verbinde mit", // 53
    "um WLAN einzustellen", // 54
    "Verbindungsversuch", // 55
    "Fehler!", // 56
    "Verbunden!", // 57
    "Stationlist Rechner-IP", // 58
    "KW-Wellenlänge\nanzeigen", // 59
    "RDS-Filter", // 60
    "Zeige PI-Fehler", // 61
    "Verwende Rauschsperre", // 62
    "Audiopegelanzeige", // 63
    "Rauschunterdrückung", // 64
    "Rauschunterdrückung", // 65
    "Werkseinstellungen\nwurden geladen", // 66
    "Audioausgabe", // 67
    "Bei Bildschirm aus\nTunen erlauben", // 68
    "Anzeigefarben umkehren", // 69
    "Über diese Software", // 70
    "Hauptcode:", // 71
    "Mitwirkende:", // 72
    "Unbekannt", // 73
    "Bildschirmschoner-\nOptionen", // 74
    "Abschaltzeit", // 75
    "Bildschirm aus", // 76
    "Thema", // 77
    "Oberfläche", // 78
    "Erkannte Applikationen", // 79
    "Min.", // 80
    "Dynamische\nSPI-Geschw.", // 81
    "Scanempfindlichkeit", // 82
    "KEINE", // 83
    "Softwareversion", // 84
    "Frequenz-Schriftart", // 85
    "Auto", // 86
    "Keine AF verfügbar", // 87
    "Kein EON verfügbar", // 88
    "Kein RT+ verfügbar", // 89
    "UKW\nStandard-Schrittweite", // 90
    "Bildschirmschoner", // 91
    "Sek.", // 92
    "Uhrzeit-Modus", // 93
    "1% Helligkeit", // 94
    "25% Helligkeit", // 95
    "50% Helligkeit", // 96
    "AM RF-Pegeloffset", // 97
    "Einheit des Signalpegels", // 98
    "Verwende AF", // 99
    "Wähle UKW-Band", // 100
    "Wähle AM-Band", // 101
    "LW", // 102
    "MW", // 103
    "KW", // 104
    "UKW", // 105
    "OIRT", // 106
    "Bei Bildschirm aus Tunen erlauben", // 107
    "Modell auswählen", // 108
    "Basismodell", // 109
    "Portabel", // 110
    "Portabel Touch", // 111
    "Titel", // 112
    "Album", // 113
    "Track", // 114
    "Künstler", // 115
    "Komposition", // 116
    "Satz", // 117
    "Dirigent", // 118
    "Komponist", // 119
    "Band", // 120
    "Kommentar", // 121
    "Genre", // 122
    "Nachrichten", // 123
    "Lokalnachrichten", // 124
    "Aktienmarkt", // 125
    "Sport", // 126
    "Lotterie", // 127
    "Horoskop", // 128
    "Tagestipp", // 129
    "Gesundheit", // 130
    "Ereignis", // 131
    "Szene", // 132
    "Kino", // 133
    "TV", // 134
    "Tag/Uhrzeit", // 135
    "Wetter", // 136
    "Verkehr", // 137
    "Alarm", // 138
    "Werbung", // 139
    "Website", // 140
    "Info", // 141
    "Kurzes PS", // 142
    "Langes PS", // 143
    "Es läuft", // 144
    "Es folgt", // 145
    "Thema", // 146
    "Am Mikrofon", // 147
    "Redaktion", // 148
    "Frequenz", // 149
    "Homepage", // 150
    "Subchannel", // 151
    "Telefon Hotline", // 152
    "Telefon Studio", // 153
    "Telefon", // 154
    "SMS Studio", // 155
    "SMS", // 156
    "E-Mail Hotline", // 157
    "E-Mail Studio", // 158
    "E-Mail", // 159
    "Chat", // 160
    "Chat-Zentrale", // 161
    "Abstimmung", // 162
    "Abstimmungs-Zentrale", // 163
    "Ort", // 164
    "Termin", // 165
    "Musik-ID", // 166
    "Bezugsquelle", // 167
    "Empfange Daten", // 168
    "MW\nStandardschrittweite", // 169
    "Tangerine", // 170
    "Ocean", // 171
    "Indigo", // 172
    "Akkuoptionen", // 173
    "Spannung anzeigen", // 174
    "Prozente anzeigen", // 175
    "RT puffern", // 176
    "Haupteinstellungen", // 177
    "Audioeinstellungen", // 178
    "Anzeigeeinstellungen", // 179
    "RDS-Einstellungen", // 180
    "UKW-Einstellungen", // 181
    "AM-Einstellungen", // 182
    "Verbindungen und Uhrzeit", // 183
    "DRÜCKE MODE FÜR ZURÜCK", // 184
    "Gleichkanalerkennung", // 185
    "Gleichkanalerkennung\nEmpfindlichkeit", // 186
    "Gleichkanalerkennung\nSchwelle", // 187
    "Gleichkanalerkennung\nZähler", // 188
    "HAUPT", // 189
    "AUDIO", // 190
    "ANZEIGE", // 191
    "RDS", // 192
    "UKW", // 193
    "AM", // 194
    "VERBIND./UHR", // 195
    "DX-MODUS", // 196
    "AUTO MEM", // 197
    "AM AGC", // 198
    "Entzerrung auf UKW", // 199
    "Wenig", // 200
    "Viel", // 201
    "Maximal", // 202
    "Schnelles PS", // 203
    "Standard", // 204
    "Bildschirm aus bei\nXDRGTK-Verbindung", // 205
    "FMSI Stereo-\nVerbesserung", // 206
    "Funktion nur für\nTEF6687/6689 verfügbar!", // 207
    "Funktion für ausgewählten\nSkin nicht verfügbar!", // 208
    "Starte Scan mit\nSpeicherplatz", // 209
    "Stoppe Scan mit\nSpeicherplatz", // 210
    "Wartezeit", // 211
    "Starte DX-Scan", // 212
    "UKW DX-Optionen", // 213
    "Abbruch! Start-Speicher-\nplatz ist nicht belegt", // 214
    "AF Autosortierung", // 215
    "Speicherplätze scannen", // 216
    "Nein", // 217
    "Ja, ausschließlich", // 218
    "Automatisches\nScan-Ende", // 219
    "Korrekter PI-Code", // 220
    "Signal", // 221
    "Stumm beim Scannen", // 222
    "AIR", // 223
    "BAND-Knopf\n5 Sek. drücken", // 224
    "Ausschalten", // 225
    "Bildschirmschoner", // 226
    "Deaktiviert", // 227
    "Nicht definiert", // 228
    "Nachrichten", // 229
    "Aktuelle Info", // 230
    "Service Programm", // 231
    "Sport", // 232
    "Bildung", // 233
    "Hörspiel + Lit", // 234
    "Kultur+Gesellsch", // 235
    "Wissenschaft", // 236
    "Unterhaltung", // 237
    "Pop Musik", // 238
    "Rock Musik", // 239
    "Unterhalt Musik", // 240
    "Leichte Klassik", // 241
    "Ernste Klassik", // 242
    "Spezielle Musik", // 243
    "Wetter", // 244
    "Wirtschaft", // 245
    "Kinderprogramm", // 246
    "Soziales", // 247
    "Religion", // 248
    "Anrufsendung", // 249
    "Reiseinformation", // 250
    "Freizeit", // 251
    "Jazz", // 252
    "Country Musik", // 253
    "Landesmusik", // 254
    "Oldies Musik", // 255
    "Folklore", // 256
    "Feature", // 257
    "Alarm Test", // 258
    "Alarm! Alarm!", // 259
    "Anfänglich", // 260
    "Immer", // 261
    "Uhr anzeigen", // 262
    "Zeige langes PS", // 263
    "Start-Frequenz", // 264
    "Stopp-Frequenz", // 265
    "Start-Speicherplatz", // 266
    "Stopp-Speicherplatz", // 267
    "Speichern nur mit RDS", // 268
    "Starte Auto-Speichern", // 269
    "Auto-Speichern", // 270
    "Stationlist-ID", // 271
    "gefunden", // 272
    "Abbruch! Speicherplätze voll", // 273
    "Abbruch! Taste wurde gedrückt", // 274
    "Scan ohne Fehler beendet", // 275
    "Lösche Speicherplätze", // 276
    "gelöscht", // 277
    "Doppelte PI verhindern", // 278
    "Bereich", // 279
    "Voll", // 280
    "Wartezeit nur wenn\nSignal vorhanden", // 281
    "Markierte Ecke drücken", // 282
    "zum Kalibrieren des Touchscrees", // 283
    "Zum Stoppen des DX-Scans\nTaste BW lange drücken", // 284
    "Bandbreite wählen", // 285
    "Dein Logbuch", // 286
    "Logbuch herunterladen", // 287
    "Logbuch ist leer", // 288
    "Zum Ende gehen", // 289
    "Logbuch-Eintrag\nwurde erstellt", // 290
    "Logbuch-Eintrag\nist fehlgeschlagen", // 291
    "Logbuch löschen", // 292
    "Logbuch gelöscht", // 293
    "Löschen fehlgeschlagen", // 294
    "Logbucheintrag nicht möglich\nLogbuch ist voll!", // 295
    "Automatisch loggen", // 296
    "Auto-Sommerzeit\nüber NTP", // 297
    "NTP-Zeitversatz\neinstellen", // 298
    "Das Logbuch enthält mehr als 130 Einträge, was das Anzeigeprogramm nicht verarbeiten kann. Bitte lade die CSV-Datei zum Verarbeiten herunter.", // 299
    "Kanada", // 300
    "Verbinden Sie dieses Gerät mit einem WiFi-Netzwerk, um Fernfunktionen zu aktivieren.", // 301
    "WiFi konfigurieren", // 302
    "Verstecktes Netzwerk", // 303
    "WiFi-Netzwerkname", // 304
    "SSID eingeben oder Netzwerk oben wählen", // 305
    "Passwort", // 306
    "Passwort eingeben", // 307
    "Speichern und verbinden", // 308
    "Erneut scannen", // 309
    "Verbinde mit", // 310
    "Verbunden mit", // 311
    "Sie können diese Seite jetzt schließen.", // 312
    "Verbindung fehlgeschlagen mit", // 313
    "Hier klicken, um es erneut zu versuchen", // 314
    "Optionen", // 315
    "WiFi auswählen", // 316
    "Keine Netzwerke gefunden. Aktualisieren zum erneuten Scannen.", // 317
    "Zugangsdaten gespeichert", // 318
    "XDRGTK-Passwort festlegen (max. 8 Zeichen)", // 319
    "rabbitears.info Benutzer-ID festlegen", // 320
    "rabbitears.info Passwort festlegen", // 321
    "ID", // 322
    "DHCP", // 323
    "IP-Adresse", // 324
    "Subnetzmaske", // 325
    "Gateway", // 326
    "Direkte Abstimmung", // 327
    "Der Akku ist fast leer", // 328
    "DRÜCKE EINEN KNOPF ZUM SCHLIESSEN" // 329
  },
  { "Simplified Chinese", // Simplified Chinese
    "飞梭方向改变了", // 1
    "请释放按钮", // 2
    "屏幕翻转了", // 3
    "校准模拟S表", // 4
    "USB 连机模式选择", // 5
    "设置为光学编码器", // 6
    "设置为标准编码器", // 7
    "FM/AM TEF6686收音机", // 8
    "没有收音芯片！", // 9
    "音量", // 10
    "偏移量", // 11
    "FM 最低频率", // 12
    "FM 最高频率", // 13
    "FM信号偏移量", // 14
    "立体声阈值", // 15
    "高切角", // 16
    "高切门限", // 17
    "弱信号门限", // 18
    "屏幕亮度", // 19
    "设置音量", // 20
    "设置频率偏移量", // 21
    "设置 FM 最低频率", // 22
    "设置 FM 最高频率", // 23
    "设置信号值偏移量", // 24
    "设置立体声门限", // 25
    "设置高切角频率", // 26
    "设置高切门限", // 27
    "设置弱信号门限", // 28
    "屏幕亮度", // 29
    "关闭", // 30
    "打开", // 31
    "按 MODE 键退出并保存", // 32
    "时钟模式", // 33
    "搜索中...", // 34
    "未检测到收音芯片", // 35
    "AM 天线增益", // 36
    "FM AGC", // 37
    "显示 RDS 错误", // 38
    "语言", // 39
    "选择语言", // 40
    "从RDS同步时间", // 41
    "错误! 无RDS信号", // 42
    "FM 软静噪", // 43
    "AM 软静噪", // 44
    "频率边界提示音", // 45
    "国家与地区", // 46
    "欧洲", // 47
    "USA", // 48
    "RDS 中显示下划线", // 49
    "只有PS", // 50
    "打开 Wifi", // 51
    "Wi-Fi 配置", // 52
    "连接到：", // 53
    "配置 Wi-Fi", // 54
    "尝试连接 Wifi 到", // 55
    "失败.. 关闭 Wi-Fi", // 56
    "连接成功！", // 57
    "Stationlist 客户端 IP", // 58
    "显示短波米波段", // 59
    "RDS 过滤器", // 60
    "显示 PI 错误", // 61
    "使能静噪功能", // 62
    "主画面显示 M 表", // 63
    "AM 噪声消除", // 64
    "FM 噪声消除", // 65
    "恢复出厂设置", // 66
    "音频输出选择", // 67
    "盲操", // 68
    "屏幕颜色反演", // 69
    "关于", // 70
    "主程序", // 71
    "贡献者", // 72
    "未知", // 73
    "屏保选项", // 74
    "倒计时休眠", // 75
    "关闭屏幕", // 76
    "主题 & 颜色", // 77
    "布局", // 78
    "检测到的应用程序", // 79
    "分钟", // 80
    "调整 SPI 通讯速率", // 81
    "搜索灵敏度", // 82
    "不可用", // 83
    "固件版本", // 84
    "频率字体", // 85
    "自动", // 86
    "AF 不可用", // 87
    "EON 不可用", // 88
    "RT+ 不可用", // 89
    "FM 默认步进", // 90
    "屏保", // 91
    "秒", // 92
    "时钟制式", // 93
    "屏幕 1% 亮度", // 94
    "屏幕 25% 亮度", // 95
    "屏幕 50% 亮度", // 96
    "AM 高频信号偏移", // 97
    "信号单位", // 98
    "使能 AF", // 99
    "选择 FM 波段", // 100
    "选择 AM 波段", // 101
    "长波", // 102
    "中波", // 103
    "短波", // 104
    "调频", // 105
    "OIRT", // 106
    "熄屏操作飞梭", // 107
    "硬件型号选择", // 108
    "原版", // 109
    "便携版", // 110
    "便携电阻触摸版", // 111
    "Title", // 112
    "Album", // 113
    "Track", // 114
    "Artist", // 115
    "Composition", // 116
    "Movement", // 117
    "Conductor", // 118
    "Composer", // 119
    "Band", // 120
    "Comment", // 121
    "Genre", // 122
    "News", // 123
    "Local news", // 124
    "Stockmarket", // 125
    "Sport", // 126
    "Lottery", // 127
    "Horoscope", // 128
    "Daily Diversion", // 129
    "Health", // 130
    "Event", // 131
    "Scene", // 132
    "Cinema", // 133
    "TV", // 134
    "Date/time", // 135
    "Weather", // 136
    "Traffic", // 137
    "Alarm", // 138
    "Advertisement", // 139
    "Website", // 140
    "Other", // 141
    "Short PS", // 142
    "Long PS", // 143
    "Now", // 144
    "Next", // 145
    "Part", // 146
    "Host", // 147
    "Editor", // 148
    "Frequency", // 149
    "Homepage", // 150
    "Subchannel", // 151
    "Hotline", // 152
    "Studio phone", // 153
    "Phone", // 154
    "SMS studio", // 155
    "SMS", // 156
    "Email hotline", // 157
    "Email studio", // 158
    "Email", // 159
    "Chat", // 160
    "Chat centre", // 161
    "Vote question", // 162
    "Vote centre", // 163
    "Place", // 164
    "Appointment", // 165
    "Identifier", // 166
    "Purchase", // 167
    "获取数据", // 168
    "中波默认步进", // 169
    "橘红", // 170
    "海蓝", // 171
    "靛青", // 172
    "显示电池", // 173
    "电压值", // 174
    "电池百分比", // 175
    "RT 缓存", // 176
    "主要设置", // 177
    "音频设置", // 178
    "显示设置", // 179
    "RDS 设置", // 180
    "FM 设置", // 181
    "AM 设置", // 182
    "上位机 & 时钟", // 183
    "按 MODE 键返回", // 184
    "AM 载波跟踪", // 185
    "设置跟踪灵敏度", // 186
    "AM 载波跟踪层级", // 187
    "设置跟踪层级", // 188
    "主设置", // 189
    "音频设置", // 190
    "显示设置", // 191
    "RDS", // 192
    "FM", // 193
    "AM", // 194
    "连接&时钟", // 195
    "DX模式", // 196
    "扫描自动存台", // 197
    "AM AGC", // 198
    "FM去加重", // 199
    "小", // 200
    "大", // 201
    "全部", // 202
    "快速 PS", // 203
    "默认", // 204
    "XDRGTK 连结时冻结屏幕", // 205
    "FMSI 立体声加强", // 206
    "此功能仅限 TEF6687/6689!", // 207
    "此主题不支持该功能!", // 208
    "开始扫描存储信道", // 209
    "停止扫描存储信道", // 210
    "扫描等待时间", // 211
    "开始 DX 扫描", // 212
    "FM DX 选项", // 213
    "取消! 所选信道被跳过.", // 214
    "自动排列 AF", // 215
    "已存储信道", // 216
    "不扫描", // 217
    "只扫描", // 218
    "自动取消扫描", // 219
    "正确的 PI", // 220
    "信号", // 221
    "扫描时静音", // 222
    "航空", // 223
    "按下波段键 5秒", // 224
    "关机", // 225
    "熄屏", // 226
    "禁止", // 227
    "无节目", // 228
    "News", // 229
    "Current Affairs", // 230
    "Information", // 231
    "Sport", // 232
    "Education", // 233
    "Drama", // 234
    "Culture", // 235
    "Science", // 236
    "Varied", // 237
    "Pop Music", // 238
    "Rock Music", // 239
    "Easy Listening", // 240
    "Light Classical", // 241
    "Serious Classical", // 242
    "Other Music", // 243
    "Weather", // 244
    "Finance", // 245
    "Children's Progs", // 246
    "Social Affairs", // 247
    "Religion", // 248
    "Phone-In", // 249
    "Travel", // 250
    "Leisure", // 251
    "Jazz Music", // 252
    "Country Music", // 253
    "National Music", // 254
    "Oldies Music", // 255
    "Folk Music", // 256
    "Documentary", // 257
    "警报测试", // 258
    "警报!!!", // 259
    "仅初次", // 260
    "总是", // 261
    "显示时间", // 262
    "显示长的 PS", // 263
    "开始频率", // 264
    "停止频率", // 265
    "开始的记忆信道", // 266
    "停止的记忆信道", // 267
    "只存储RDS电台", // 268
    "开始搜索并存台", // 269
    "自动搜台并存储", // 270
    "电台列表ID", // 271
    "搜索到", // 272
    "取消! 存储已满", // 273
    "取消! 用户终止了操作", // 274
    "成功完成搜索", // 275
    "删除存储信道", // 276
    "删除了", // 277
    "防止双 PI", // 278
    "一定范围内", // 279
    "全部", // 280
    "无信号不停留", // 281
    "触摸区边沿高亮", // 282
    "校准触摸屏", // 283
    "按住BW按钮停止DX扫描仪", // 284
    "选择带宽", // 285
    "你的 log记录", // 286
    "下载 log记录", // 287
    "log为空", // 288
    "跳到底部", // 289
    "添加到log记录", // 290
    "更新失败!", // 291
    "清除log记录", // 292
    "log记录已清除", // 293
    "清除失败", // 294
    "log记录已满!", // 295
    "自动记录日志", // 296
    "联网自动同步本机时间", // 297
    "设置NTP时区", // 298
    "该日志包含超过130个条目，观看者无法处理。请下载CSV文件进行处理。", // 299
    "加拿大", // 300
    "将此设备连接到WiFi网络以启用远程功能。", // 301
    "配置WiFi", // 302
    "隐藏网络", // 303
    "WiFi网络名称", // 304
    "输入SSID或选择上方网络", // 305
    "密码", // 306
    "输入密码", // 307
    "保存并连接", // 308
    "重新扫描", // 309
    "正在连接", // 310
    "已连接到", // 311
    "您现在可以关闭此页面。", // 312
    "无法连接到", // 313
    "点击此处重试", // 314
    "选项", // 315
    "选择WiFi", // 316
    "未找到网络。刷新以重新扫描。", // 317
    "凭据已保存", // 318
    "设置XDRGTK密码（最多8个字符）", // 319
    "设置rabbitears.info用户ID", // 320
    "设置rabbitears.info密码", // 321
    "ID", // 322
    "DHCP", // 323
    "IP address", // 324
    "Subnet mask", // 325
    "Gateway", // 326
    "直接调谐", // 327
    "Battery almost empty", // 328
    "PRESS ANY BUTTON TO CLOSE" // 329
  }
};
#endif
