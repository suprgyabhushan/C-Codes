#!/usr/bin/perl
# Copyright (c) 1991-2006 Kawahara Lab., Kyoto University
# Copyright (c) 2000-2005 Shikano Lab., Nara Institute of Science and Technology
# Copyright (c) 2005-2006 Julius project team, Nagoya Institute of Technology, Nagoya Institute of Technology
# All rights reserved
#
# Generated automatically from yomi2voca.pl.in by configure. 
#

# ひらがな -> ROMAN(標準形式) 変換スクリプト
#   .yomi -> .voca


while (<>) {
# カテゴリ名はすっとばす
    if (/^%/){
	print;
	next;
    }
    chop;
# 表記とひらがな読みを分離
    @a = split;
    $_ = $a[1];
# ひらがな，長音以外はそのまま
# 2文字からなる変換規則
    s/でぃ/ d i/g;
    s/てぃ/ t i/g;
    s/すぃ/ s i/g;
    s/ずぃ/ z i/g;
    s/きゃ/ ky a/g;
    s/きゅ/ ky u/g;
    s/きょ/ ky o/g;
    s/しゃ/ sh a/g;
    s/しゅ/ sh u/g;
    s/しぇ/ sh e/g;
    s/しょ/ sh o/g;
    s/ちゃ/ ch a/g;
    s/ちゅ/ ch u/g;
    s/ちぇ/ ch e/g;
    s/ちょ/ ch o/g;
    s/にゃ/ ny a/g;
    s/にゅ/ ny u/g;
    s/にょ/ ny o/g;
    s/ひゃ/ hy a/g;
    s/ひゅ/ hy u/g;
    s/ひょ/ hy o/g;
    s/みゃ/ my a/g;
    s/みゅ/ my u/g;
    s/みょ/ my o/g;
    s/りゃ/ ry a/g;
    s/りゅ/ ry u/g;
    s/りょ/ ry o/g;
    s/ぎゃ/ gy a/g;
    s/ぎゅ/ gy u/g;
    s/ぎょ/ gy o/g;
    s/じゃ/ j a/g;
    s/ぢゃ/ j a/g;
    s/じゅ/ j u/g;
    s/じぇ/ j e/g;
    s/じょ/ j o/g;
    s/びゃ/ by a/g;
    s/びゅ/ by u/g;
    s/びょ/ by o/g;
    s/ぴゃ/ py a/g;
    s/ぴゅ/ py u/g;
    s/ぴょ/ py o/g;
    s/うぃ/ w i/g;
    s/うぇ/ w e/g;
    s/うぉ/ w o/g;
    s/ふぁ/ f a/g;
    s/ふぃ/ f i/g;
    s/ふぇ/ f e/g;
    s/ふぉ/ f o/g;

# 1音からなる変換規則
    s/あ/ a/g;
    s/い/ i/g;
    s/う/ u/g;
    s/え/ e/g;
    s/お/ o/g;
    s/か/ k a/g;
    s/き/ k i/g;
    s/く/ k u/g;
    s/け/ k e/g;
    s/こ/ k o/g;
    s/さ/ s a/g;
    s/し/ sh i/g;
    s/す/ s u/g;
    s/せ/ s e/g;
    s/そ/ s o/g;
    s/た/ t a/g;
    s/ち/ ch i/g;
    s/つ/ ts u/g;
    s/て/ t e/g;
    s/と/ t o/g;
    s/な/ n a/g;
    s/に/ n i/g;
    s/ぬ/ n u/g;
    s/ね/ n e/g;
    s/の/ n o/g;
    s/は/ h a/g;
    s/ひ/ h i/g;
    s/ふ/ f u/g;
    s/へ/ h e/g;
    s/ほ/ h o/g;
    s/ま/ m a/g;
    s/み/ m i/g;
    s/む/ m u/g;
    s/め/ m e/g;
    s/も/ m o/g;
    s/ら/ r a/g;
    s/り/ r i/g;
    s/る/ r u/g;
    s/れ/ r e/g;
    s/ろ/ r o/g;
    s/が/ g a/g;
    s/ぎ/ g i/g;
    s/ぐ/ g u/g;
    s/げ/ g e/g;
    s/ご/ g o/g;
    s/ざ/ z a/g;
    s/じ/ j i/g;
    s/ず/ z u/g;
    s/ぜ/ z e/g;
    s/ぞ/ z o/g;
    s/だ/ d a/g;
    s/ぢ/ j i/g;
    s/づ/ z u/g;
    s/で/ d e/g;
    s/ど/ d o/g;
    s/ば/ b a/g;
    s/び/ b i/g;
    s/ぶ/ b u/g;
    s/べ/ b e/g;
    s/ぼ/ b o/g;
    s/ぱ/ p a/g;
    s/ぴ/ p i/g;
    s/ぷ/ p u/g;
    s/ぺ/ p e/g;
    s/ぽ/ p o/g;
    s/や/ y a/g;
    s/ゆ/ y u/g;
    s/よ/ y o/g;
    s/わ/ w a/g;
    s/ん/ N/g;
    s/っ/ q/g;
    s/ー/:/g;

#その他特別なルール
    s/を/ o/g;

    s/^ ([a-z])/$1/g;
    print @a[0], "\t", $_,"\n";
}
