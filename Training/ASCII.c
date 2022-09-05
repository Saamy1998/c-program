/*Algorithum
Step 1: STRAT.
Step 2: Declare variables 'i'.
Step 3: Check FOR condition.
Step 4: If the condition is true, then go to step 5 otherwise go to step 7.
Step 5: Print ASCII value from range 0-255.
Step 6: Go to step 3.
Step 7: STOP.*/

#include <stdio.h>

int main()
{
    int i;

    for( i=0 ; i<=255 ; i++ ) /*ASCII values ranges from 0-255*/
    {
        printf("ASCII value of character %c = %d\n", i, i);
    }

    return 0;
}


/*OUTPUT:

ASCII value of character   = 0
ASCII value of character ☺ = 1
ASCII value of character ☻ = 2
ASCII value of character ♥ = 3
ASCII value of character ♦ = 4
ASCII value of character ♣ = 5
ASCII value of character ♠ = 6
ASCII value of character  = 7
ASCII value of character = 8
ASCII value of character         = 9
ASCII value of character
 = 10
ASCII value of character ♂ = 11
ASCII value of character ♀ = 12
 = 13 value of character
ASCII value of character ♫ = 14
ASCII value of character ☼ = 15
ASCII value of character ► = 16
ASCII value of character ◄ = 17
ASCII value of character ↕ = 18
ASCII value of character ‼ = 19
ASCII value of character ¶ = 20
ASCII value of character § = 21
ASCII value of character ▬ = 22
ASCII value of character ↨ = 23
ASCII value of character ↑ = 24
ASCII value of character ↓ = 25
ASCII value of character → = 26
ASCII value of character ← = 27
ASCII value of character ∟ = 28
ASCII value of character ↔ = 29
ASCII value of character ▲ = 30
ASCII value of character ▼ = 31
ASCII value of character   = 32
ASCII value of character ! = 33
ASCII value of character " = 34
ASCII value of character # = 35
ASCII value of character $ = 36
ASCII value of character % = 37
ASCII value of character & = 38
ASCII value of character ' = 39
ASCII value of character ( = 40
ASCII value of character ) = 41
ASCII value of character * = 42
ASCII value of character + = 43
ASCII value of character , = 44
ASCII value of character - = 45
ASCII value of character . = 46
ASCII value of character / = 47
ASCII value of character 0 = 48
ASCII value of character 1 = 49
ASCII value of character 2 = 50
ASCII value of character 3 = 51
ASCII value of character 4 = 52
ASCII value of character 5 = 53
ASCII value of character 6 = 54
ASCII value of character 7 = 55
ASCII value of character 8 = 56
ASCII value of character 9 = 57
ASCII value of character : = 58
ASCII value of character ; = 59
ASCII value of character < = 60
ASCII value of character = = 61
ASCII value of character > = 62
ASCII value of character ? = 63
ASCII value of character @ = 64
ASCII value of character A = 65
ASCII value of character B = 66
ASCII value of character C = 67
ASCII value of character D = 68
ASCII value of character E = 69
ASCII value of character F = 70
ASCII value of character G = 71
ASCII value of character H = 72
ASCII value of character I = 73
ASCII value of character J = 74
ASCII value of character K = 75
ASCII value of character L = 76
ASCII value of character M = 77
ASCII value of character N = 78
ASCII value of character O = 79
ASCII value of character P = 80
ASCII value of character Q = 81
ASCII value of character R = 82
ASCII value of character S = 83
ASCII value of character T = 84
ASCII value of character U = 85
ASCII value of character V = 86
ASCII value of character W = 87
ASCII value of character X = 88
ASCII value of character Y = 89
ASCII value of character Z = 90
ASCII value of character [ = 91
ASCII value of character \ = 92
ASCII value of character ] = 93
ASCII value of character ^ = 94
ASCII value of character _ = 95
ASCII value of character ` = 96
ASCII value of character a = 97
ASCII value of character b = 98
ASCII value of character c = 99
ASCII value of character d = 100
ASCII value of character e = 101
ASCII value of character f = 102
ASCII value of character g = 103
ASCII value of character h = 104
ASCII value of character i = 105
ASCII value of character j = 106
ASCII value of character k = 107
ASCII value of character l = 108
ASCII value of character m = 109
ASCII value of character n = 110
ASCII value of character o = 111
ASCII value of character p = 112
ASCII value of character q = 113
ASCII value of character r = 114
ASCII value of character s = 115
ASCII value of character t = 116
ASCII value of character u = 117
ASCII value of character v = 118
ASCII value of character w = 119
ASCII value of character x = 120
ASCII value of character y = 121
ASCII value of character z = 122
ASCII value of character { = 123
ASCII value of character | = 124
ASCII value of character } = 125
ASCII value of character ~ = 126
ASCII value of character ⌂ = 127
ASCII value of character Ç = 128
ASCII value of character ü = 129
ASCII value of character é = 130
ASCII value of character â = 131
ASCII value of character ä = 132
ASCII value of character à = 133
ASCII value of character å = 134
ASCII value of character ç = 135
ASCII value of character ê = 136
ASCII value of character ë = 137
ASCII value of character è = 138
ASCII value of character ï = 139
ASCII value of character î = 140
ASCII value of character ì = 141
ASCII value of character Ä = 142
ASCII value of character Å = 143
ASCII value of character É = 144
ASCII value of character æ = 145
ASCII value of character Æ = 146
ASCII value of character ô = 147
ASCII value of character ö = 148
ASCII value of character ò = 149
ASCII value of character û = 150
ASCII value of character ù = 151
ASCII value of character ÿ = 152
ASCII value of character Ö = 153
ASCII value of character Ü = 154
ASCII value of character ¢ = 155
ASCII value of character £ = 156
ASCII value of character ¥ = 157
ASCII value of character ₧ = 158
ASCII value of character ƒ = 159
ASCII value of character á = 160
ASCII value of character í = 161
ASCII value of character ó = 162
ASCII value of character ú = 163
ASCII value of character ñ = 164
ASCII value of character Ñ = 165
ASCII value of character ª = 166
ASCII value of character º = 167
ASCII value of character ¿ = 168
ASCII value of character ⌐ = 169
ASCII value of character ¬ = 170
ASCII value of character ½ = 171
ASCII value of character ¼ = 172
ASCII value of character ¡ = 173
ASCII value of character « = 174
ASCII value of character » = 175
ASCII value of character ░ = 176
ASCII value of character ▒ = 177
ASCII value of character ▓ = 178
ASCII value of character │ = 179
ASCII value of character ┤ = 180
ASCII value of character ╡ = 181
ASCII value of character ╢ = 182
ASCII value of character ╖ = 183
ASCII value of character ╕ = 184
ASCII value of character ╣ = 185
ASCII value of character ║ = 186
ASCII value of character ╗ = 187
ASCII value of character ╝ = 188
ASCII value of character ╜ = 189
ASCII value of character ╛ = 190
ASCII value of character ┐ = 191
ASCII value of character └ = 192
ASCII value of character ┴ = 193
ASCII value of character ┬ = 194
ASCII value of character ├ = 195
ASCII value of character ─ = 196
ASCII value of character ┼ = 197
ASCII value of character ╞ = 198
ASCII value of character ╟ = 199
ASCII value of character ╚ = 200
ASCII value of character ╔ = 201
ASCII value of character ╩ = 202
ASCII value of character ╦ = 203
ASCII value of character ╠ = 204
ASCII value of character ═ = 205
ASCII value of character ╬ = 206
ASCII value of character ╧ = 207
ASCII value of character ╨ = 208
ASCII value of character ╤ = 209
ASCII value of character ╥ = 210
ASCII value of character ╙ = 211
ASCII value of character ╘ = 212
ASCII value of character ╒ = 213
ASCII value of character ╓ = 214
ASCII value of character ╫ = 215
ASCII value of character ╪ = 216
ASCII value of character ┘ = 217
ASCII value of character ┌ = 218
ASCII value of character █ = 219
ASCII value of character ▄ = 220
ASCII value of character ▌ = 221
ASCII value of character ▐ = 222
ASCII value of character ▀ = 223
ASCII value of character α = 224
ASCII value of character ß = 225
ASCII value of character Γ = 226
ASCII value of character π = 227
ASCII value of character Σ = 228
ASCII value of character σ = 229
ASCII value of character µ = 230
ASCII value of character τ = 231
ASCII value of character Φ = 232
ASCII value of character Θ = 233
ASCII value of character Ω = 234
ASCII value of character δ = 235
ASCII value of character ∞ = 236
ASCII value of character φ = 237
ASCII value of character ε = 238
ASCII value of character ∩ = 239
ASCII value of character ≡ = 240
ASCII value of character ± = 241
ASCII value of character ≥ = 242
ASCII value of character ≤ = 243
ASCII value of character ⌠ = 244
ASCII value of character ⌡ = 245
ASCII value of character ÷ = 246
ASCII value of character ≈ = 247
ASCII value of character ° = 248
ASCII value of character ∙ = 249
ASCII value of character · = 250
ASCII value of character √ = 251
ASCII value of character ⁿ = 252
ASCII value of character ² = 253
ASCII value of character ■ = 254
ASCII value of character   = 255

Process returned 0 (0x0)   execution time : 1.390 s
Press any key to continue.*/
