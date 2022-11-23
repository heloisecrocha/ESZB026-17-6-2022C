#!/bin/sh
ARQUIVODADOS=/home/pi/ESZB026-17-6-2022C/lab07/dados2.txt
ARQUIVOSAIDA=/home/pi/ESZB026-17-6-2022C/lab07/dados2.png


gnuplot << EOF
set title "Segundo Grafico"
set ylabel "Eixo Y"
set xlabel "Eixo X"
set terminal png
set output "$ARQUIVOSAIDA"
plot "$ARQUIVODADOS" \
     linecolor rgb '#0060ad' \
     linetype 4 \
     linewidth 4 \
     pointtype 4 \
     pointsize 1.0 \
     title "dados 2" 
    # with linespoints
EOF

