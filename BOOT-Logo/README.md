# Eigenes Boot- und Status-Logo

## Boot-Logo

Für das Boot-Logo braucht ihr, am besten ein Schwarz-Weiß-Bild in der
Größe von 128x64Pixel. Es gibt natürlich viele Wege ein solches Bild zu
erzeugen. Hier zeige ich nur einen sehr vereinfachen weg. Hierzu
benutzen wir Paint. Das ist bei Windows dabei so, dass diese Anleitung
jeder nachvollziehen kann.

Nach dem Öffnen von Paint, stellen wir als erstes die Bildeigenschaften
ein. Hierzu gehen wir im Menu Datei, auf den Punkt
![](.//media/image1.png){width="0.9791743219597551in"
height="0.35416885389326336in"}. In dem nun erscheinenden Dialog machen
wir die angezeigten Einstellungen.

![](.//media/image2.png){width="3.125022965879265in"
height="3.2187740594925636in"}

Nachdem Schließen mit OK erscheint der eine Warnung.

![](.//media/image3.png){width="3.8594028871391077in"
height="1.9739730971128608in"}

Auch diese bestätigen wir mit OK. Anschließend zoomen wir erst einmal
hinein.

Wenn ich eine Schrift einfügen mochtet empfehle ich „Century Gothic" in
9pt Bold

![](.//media/image4.png){width="6.3in" height="3.4875in"}

Ihr müsst beim Schreiben das Text-Feld anpassen, damit der Text
hineinpasst. Sobald ich ein weiteres Objekt einfügt Ändert sich die
Schrift und sie sieht verpixelt aus.

![](.//media/image5.png){width="6.3in" height="3.4875in"}

Deshalb schreibt nicht zu klein und wählt euren Font mit bedacht. Beim
Mahlen mit Formen sieht man gleich wie das Ergebnis aussehen wird.\
![](.//media/image6.png){width="6.3in" height="3.4875in"}

Wenn ihr mit dem Bild fertig seid, speichert ihr es als JPG ab.

Nun Präparieren wir und die Datei „\_Bootscreen.h". Diese muss im
Verzeichnis Marlin angelegt werden. Hier liegen auch die Dateien
„Configuration.h" und „Configuration_adv.h". Die Datei kann leer
bleiben, wir komme jetzt zu ihrem Inhalt. Lasst die Datei aber, in eurem
Text-Editor geöffnet. Als nächstes ruft ihr die Webseite
<https://marlinfw.org/tools/u8glib/converter.html> auf. Hier macht ihr
die folgenden Einstellungen.

![](.//media/image7.png){width="6.3in" height="3.345138888888889in"}

Nun wählt ihr den Button „Datei auswählen" und wählt euer vorher
gespeichertes Bild aus. Dann betätigt sollte sich die Webseite wie folgt
ändern.

![](.//media/image8.png){width="6.3in" height="6.490277777777778in"}

Ihr könnt nun den Text im hellblauem Feld Selektieren und mit „Strg +
c", in die Zwischenablage übernehmen. Jetzt Wechsel ihr in den
Text-Editor mi der geöffneten Datei „\_Bootscreen.h". Hier fügt ihr mit
„Strg+v" euer konvertiertes Bild hinein. Nun sichert ihr die Datei.
Damit der Bootscreen auch angezeigt wird darf die Zeile

##define SHOW_CUSTOM_BOOTSCREEN

In der Datei „Configuration.h" nicht auskommentiert sein.

## Status-Icon

Für das Status-Icon gehen wir sehr ähnlich vor. Hier sollte das Bild
aber nicht grösser als 32x28 Pixel sein. Hierzu ändert ihr die
Bildeigenschaften wie folgt.

![](.//media/image9.png){width="3.125022965879265in"
height="3.2187740594925636in"}

Natürlich ist nicht viel Platz, um etwas komplexes zu zeichnen, aber
seiht Creativ.

![](.//media/image10.png){width="5.630249343832021in"
height="3.140647419072616in"}

Nachdem Speicher als JPG präparieren wir und zuerst die Datei
„\_Statusscreen.h" mit leerem Inhalt. Diese Datei muss im gleiche
Verzeichnis liegen wie die Datei „\_Bootscreen.h". Nun öffnen wir wieder
die Webseite <https://marlinfw.org/tools/u8glib/converter.html> und
machen die folgenden Einstellungen.\
![](.//media/image11.png){width="6.3in" height="3.1909722222222223in"}

Anschließend „Datei auswählen" drücken., so dass es wie folgt aussieht.

![](.//media/image12.png){width="6.3in" height="5.965277777777778in"}

Nun müssen wir wieder den Inhalt des hellblauen Felds kopieren und in
der Datei „\_Statusscreen.h" einfügen. Damit auch das Status Icon
gezeigt wird müssen wir in der Datei „Configuration.h" die Zeile

\#define CUSTOM_STATUS_SCREEN_IMAGE

Auskommentieren.

## Externe Quellen

Eine Anleitung für das Boot-Logo gibt es auch hier:
<https://selbstgedruckt.de/eigenes-logo-auf-dem-bootscreen-so-gehts/>
