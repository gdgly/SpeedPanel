//8x16点阵ASCII字符
//逐行式，低位在前
const char ASCII_9X12[]={
	
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*" ",4*/

0x1C,0x1C,0x1C,0x0C,0x0C,0x0C,0x0C,0x0C,0x00,0x00,0x1C,0x1C,/*"!",5*/

0x3F,0x1B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*""",6*/

0x66,0x66,0x66,0xFF,0x66,0x66,0x33,0x33,0xFF,0x33,0x33,0x33,/*"#",7*/

0x7E,0xDB,0xFB,0x1B,0x1E,0x1C,0x38,0x78,0xDF,0xDB,0xDB,0x7E,/*"$",8*/

0x67,0x6D,0x3D,0x3D,0x1D,0x1F,0x7C,0xDC,0xDC,0xDE,0xDE,0x73,/*"%",9*/

0x0E,0x1B,0x1B,0x1B,0xFF,0x67,0x67,0x3D,0x3D,0x19,0xB9,0xEF,/*"&",10*/

0x06,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"'",11*/

0x30,0x30,0x30,0x18,0x18,0x18,0x18,0x18,0x18,0x30,0x30,0x30,/*"(",12*/

0x0C,0x0C,0x0C,0x18,0x18,0x18,0x18,0x18,0x18,0x0C,0x0C,0x0C,/*")",13*/

0x00,0x00,0x18,0x18,0xFF,0x3C,0x3C,0xFF,0x18,0x18,0x00,0x00,/*"*",14*/

0x00,0x18,0x18,0x18,0x18,0xFF,0x18,0x18,0x18,0x18,0x00,0x00,/*"+",15*/

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x06,/*",",16*/

0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,/*"-",17*/

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,/*".",18*/

0xC0,0x60,0x60,0x70,0x30,0x38,0x18,0x1C,0x0C,0x0C,0x06,0x06,/*"/",19*/

0x3C,0x66,0x66,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0x66,0x66,0x3C,/*"0",20*/

0x18,0x1E,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x7E,/*"1",21*/

0x7C,0xC6,0xC3,0xC3,0xC0,0x60,0x30,0x18,0x0C,0xC6,0xC3,0xFF,/*"2",22*/

0x3E,0x63,0xC3,0xC0,0x60,0x3C,0x60,0xC0,0xC0,0xC3,0x63,0x3E,/*"3",23*/

0x30,0x30,0x38,0x3C,0x36,0x36,0x33,0x33,0x7E,0x30,0x30,0xF8,/*"4",24*/

0xFF,0x03,0x03,0x03,0x3F,0x67,0xC0,0xC0,0xC3,0xC3,0x63,0x3E,/*"5",25*/

0x7C,0x66,0x06,0x03,0x3F,0x67,0xC3,0xC3,0xC3,0xC3,0x66,0x3C,/*"6",26*/

0xFF,0x63,0x63,0x30,0x18,0x18,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,/*"7",27*/

0x3C,0x66,0xC3,0xC3,0x66,0x3C,0x66,0xC3,0xC3,0xC3,0x66,0x3C,/*"8",28*/

0x3C,0x66,0xC3,0xC3,0xC3,0xC3,0xE6,0xFC,0xC0,0x60,0x66,0x3E,/*"9",29*/

0x00,0x00,0x00,0x1C,0x1C,0x00,0x00,0x00,0x00,0x00,0x1C,0x1C,/*":",30*/

0x00,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x18,/*";",31*/

0x60,0x30,0x18,0x0C,0x06,0x03,0x06,0x0C,0x18,0x30,0x60,0xC0,/*"<",32*/

0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,/*"=",33*/

0x06,0x0C,0x18,0x30,0x60,0xC0,0x60,0x30,0x18,0x0C,0x06,0x03,/*">",34*/

0x66,0xC3,0xC3,0xC7,0x60,0x30,0x18,0x18,0x18,0x00,0x1C,0x1C,/*"?",35*/

0x3C,0x67,0xFB,0xFD,0xFD,0xF7,0xF7,0xF7,0x7D,0xC3,0x67,0x3E,/*"@",36*/

0x18,0x18,0x3C,0x3C,0x3C,0x66,0x66,0x7E,0x66,0xC3,0xC3,0xE7,/*"A",37*/

0x3F,0x63,0x63,0x63,0x33,0x3F,0x63,0xC3,0xC3,0xC3,0x63,0x3F,/*"B",38*/

0xFC,0xE6,0xC3,0x01,0x01,0x01,0x01,0x01,0xC1,0xC3,0x63,0x3E,/*"C",39*/

0x1F,0x33,0x63,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0x63,0x33,0x1F,/*"D",40*/

0x7F,0x63,0xC3,0x33,0x33,0x3F,0x33,0x33,0x03,0xC3,0x63,0x7F,/*"E",41*/

0x7F,0x63,0xC3,0x33,0x33,0x3F,0x33,0x33,0x03,0x03,0x03,0x07,/*"F",42*/

0xFC,0xE6,0xC3,0x01,0x01,0x01,0x01,0xE1,0xC1,0xC3,0xC3,0x7E,/*"G",43*/

0xF7,0x63,0x63,0x63,0x63,0x7F,0x63,0x63,0x63,0x63,0x63,0xF7,/*"H",44*/

0x7E,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x7E,/*"I",45*/

0xFC,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,/*"J",46*/

0xF7,0x63,0x33,0x1B,0x0F,0x0F,0x1B,0x1B,0x33,0x33,0x63,0xF7,/*"K",47*/

0x07,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0xC3,0xC3,0x7F,/*"L",48*/

0xE7,0xE7,0xE7,0xE7,0xFF,0xFF,0xFF,0xFF,0xDB,0xDB,0xDB,0xFF,/*"M",49*/

0xF7,0x67,0x67,0x6F,0x6F,0x6F,0x7B,0x7B,0x73,0x73,0x73,0x67,/*"N",50*/

0x3E,0x63,0x63,0xC1,0xC1,0xC1,0xC1,0xC1,0xC1,0x63,0x63,0x3E,/*"O",51*/

0x7F,0xC3,0xC3,0xC3,0xC3,0x7F,0x03,0x03,0x03,0x03,0x03,0x07,/*"P",52*/

0x3E,0x63,0x63,0xC1,0xC1,0xC1,0xC1,0xC1,0xDF,0x7B,0x73,0x3E,/*"Q",53*/

0x3F,0x63,0x63,0x63,0x63,0x3F,0x1B,0x1B,0x33,0x33,0x63,0xE7,/*"R",54*/

0xFC,0xE6,0xC3,0x03,0x06,0x1C,0x70,0xC0,0xC3,0xC3,0x67,0x3F,/*"S",55*/

0xFF,0xDB,0xDB,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x3C,/*"T",56*/

0xF7,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x3E,/*"U",57*/

0xE7,0xC3,0xC3,0x66,0x66,0x66,0x3C,0x3C,0x3C,0x3C,0x18,0x18,/*"V",58*/

0xFF,0xDB,0xDB,0xDB,0xDB,0xFF,0xFF,0xFF,0x66,0x66,0x66,0x66,/*"W",59*/

0xF7,0x63,0x36,0x36,0x1C,0x0C,0x18,0x1C,0x36,0x36,0x63,0xF7,/*"X",60*/

0xE7,0xC3,0x66,0x66,0x3C,0x3C,0x18,0x18,0x18,0x18,0x18,0x3C,/*"Y",61*/

0xFF,0x63,0x61,0x30,0x18,0x18,0x0C,0x0C,0x06,0xC3,0x63,0x7F,/*"Z",62*/

0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,/*"[",63*/

0x06,0x06,0x0C,0x0C,0x0C,0x18,0x18,0x30,0x30,0x30,0x60,0x60,/*"\",64*/

0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,/*"]",65*/

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"^",66*/

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"_",67*/

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"`",68*/

0x00,0x00,0x00,0x00,0x3E,0x63,0x78,0x6E,0x63,0x63,0x73,0xFE,/*"a",69*/

0x03,0x03,0x03,0x03,0x3F,0x67,0xC3,0xC3,0xC3,0xC3,0x67,0x3F,/*"b",70*/

0x00,0x00,0x00,0x00,0x7C,0xC6,0xC3,0x03,0x03,0xC3,0x66,0x3C,/*"c",71*/

0xE0,0xC0,0xC0,0xC0,0xFC,0xE6,0xC3,0xC3,0xC3,0xC3,0xE6,0xFC,/*"d",72*/

0x00,0x00,0x00,0x00,0x3C,0x66,0xC3,0xFF,0x03,0x03,0xC6,0x7C,/*"e",73*/

0xF8,0xCC,0x0C,0x0C,0x7F,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x3F,/*"f",74*/

0x00,0x00,0x00,0x00,0xFE,0x63,0x63,0x63,0x3E,0x03,0x7E,0xC3,/*"g",75*/

0x03,0x03,0x03,0x03,0x7F,0xC7,0xC3,0xC3,0xC3,0xC3,0xC3,0xE7,/*"h",76*/

0x1C,0x1C,0x00,0x00,0x1E,0x18,0x18,0x18,0x18,0x18,0x18,0x7E,/*"i",77*/

0x70,0x70,0x00,0x00,0x78,0x60,0x60,0x60,0x60,0x60,0x60,0x60,/*"j",78*/

0x03,0x03,0x03,0x03,0x7B,0x33,0x1B,0x0F,0x1F,0x33,0x63,0xF7,/*"k",79*/

0x1E,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x7E,/*"l",80*/

0x00,0x00,0x00,0x00,0x7F,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xFF,/*"m",81*/

0x00,0x00,0x00,0x00,0x7F,0xC7,0xC3,0xC3,0xC3,0xC3,0xC3,0xE7,/*"n",82*/

0x00,0x00,0x00,0x00,0x3C,0x66,0xC3,0xC3,0xC3,0xC3,0x66,0x3C,/*"o",83*/

0x00,0x00,0x00,0x00,0x3F,0x67,0xC3,0xC3,0xC3,0xC3,0x67,0x3F,/*"p",84*/

0x00,0x00,0x00,0x00,0xFC,0xE6,0xC3,0xC3,0xC3,0xC3,0xE6,0xFC,/*"q",85*/

0x00,0x00,0x00,0x00,0xF7,0xDE,0x0E,0x06,0x06,0x06,0x06,0x1F,/*"r",86*/

0x00,0x00,0x00,0x00,0xFE,0xC3,0x03,0x1E,0x70,0xC0,0xC3,0x7F,/*"s",87*/

0x00,0x0C,0x0C,0x0C,0x3F,0x0C,0x0C,0x0C,0x0C,0x0C,0x6C,0x38,/*"t",88*/

0x00,0x00,0x00,0x00,0xE3,0xC3,0xC3,0xC3,0xC3,0xC3,0xE3,0xFE,/*"u",89*/

0x00,0x00,0x00,0x00,0xE7,0xC3,0x66,0x66,0x3C,0x3C,0x18,0x18,/*"v",90*/

0x00,0x00,0x00,0x00,0xFF,0xDB,0xDB,0xFF,0xFF,0xFF,0x66,0x66,/*"w",91*/

0x00,0x00,0x00,0x00,0xFF,0x66,0x3C,0x18,0x18,0x3C,0x66,0xFF,/*"x",92*/

0x00,0x00,0x00,0x00,0xFF,0x66,0x3C,0x3C,0x3C,0x18,0x18,0x18,/*"y",93*/

0x00,0x00,0x00,0x00,0xFF,0x63,0x30,0x18,0x18,0xCC,0xC6,0xFF,/*"z",94*/

0x30,0x30,0x30,0x30,0x30,0x1C,0x30,0x30,0x30,0x30,0x30,0x30,/*"{",95*/

0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,/*"|",96*/

0x0C,0x0C,0x0C,0x0C,0x0C,0x38,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,/*"}",97*/

0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"~",98*/

0x00,0x1F,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x1F,/*"",99*/





	
};

const char DIG_40X60[]={


0x00,0xC0,0xFF,0x01,0x00,0x00,0xF8,0xFF,0x0F,0x00,0x00,0xFE,0xFF,0x3F,0x00,0x00,
0xFF,0xFF,0x7F,0x00,0x80,0xFF,0xFF,0xFF,0x00,0xC0,0xFF,0xFF,0xFF,0x01,0xE0,0xFF,
0xFF,0xFF,0x01,0xE0,0xFF,0xFF,0xFF,0x03,0xF0,0xFF,0xFF,0xFF,0x07,0xF0,0xFF,0xFF,
0xFF,0x07,0xF8,0xFF,0xFF,0xFF,0x07,0xF8,0xFF,0xFF,0xFF,0x0F,0xF8,0xFF,0xF7,0xFF,
0x0F,0xF8,0xFF,0xE1,0xFF,0x0F,0xFC,0xFF,0xC1,0xFF,0x1F,0xFC,0xFF,0xC0,0xFF,0x1F,
0xFC,0xFF,0x80,0xFF,0x1F,0xFC,0xFF,0x80,0xFF,0x1F,0xFC,0xFF,0x80,0xFF,0x1F,0xFE,
0xFF,0x80,0xFF,0x1F,0xFE,0x7F,0x00,0xFF,0x3F,0xFE,0x7F,0x00,0xFF,0x3F,0xFE,0x7F,
0x00,0xFF,0x3F,0xFE,0x7F,0x00,0xFF,0x3F,0xFE,0x7F,0x00,0xFF,0x3F,0xFE,0x7F,0x00,
0xFF,0x3F,0xFE,0x7F,0x00,0xFF,0x3F,0xFE,0x7F,0x00,0xFF,0x3F,0xFE,0x7F,0x00,0xFF,
0x3F,0xFE,0x7F,0x00,0xFF,0x3F,0xFE,0x7F,0x00,0xFF,0x3F,0xFE,0x7F,0x00,0xFF,0x3F,
0xFE,0x7F,0x00,0xFF,0x3F,0xFE,0x7F,0x00,0xFF,0x3F,0xFE,0x7F,0x00,0xFF,0x3F,0xFE,
0x7F,0x00,0xFF,0x3F,0xFE,0x7F,0x00,0xFF,0x3F,0xFE,0x7F,0x00,0xFF,0x3F,0xFE,0x7F,
0x00,0xFF,0x3F,0xFE,0x7F,0x00,0xFF,0x3F,0xFC,0xFF,0x80,0xFF,0x1F,0xFC,0xFF,0x80,
0xFF,0x1F,0xFC,0xFF,0x80,0xFF,0x1F,0xFC,0xFF,0x80,0xFF,0x1F,0xFC,0xFF,0xC1,0xFF,
0x1F,0xFC,0xFF,0xC1,0xFF,0x1F,0xF8,0xFF,0xE3,0xFF,0x0F,0xF8,0xFF,0xF7,0xFF,0x0F,
0xF8,0xFF,0xFF,0xFF,0x0F,0xF0,0xFF,0xFF,0xFF,0x0F,0xF0,0xFF,0xFF,0xFF,0x07,0xE0,
0xFF,0xFF,0xFF,0x07,0xE0,0xFF,0xFF,0xFF,0x03,0xC0,0xFF,0xFF,0xFF,0x03,0xC0,0xFF,
0xFF,0xFF,0x01,0x80,0xFF,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0x7F,0x00,0x00,0xFE,0xFF,
0x3F,0x00,0x00,0xF8,0xFF,0x0F,0x00,0x00,0xC0,0xFF,0x01,0x00,/*"G:\PCtoLCD\0.bmp",0*/
	
0x00,0x00,0xF8,0x7F,0x00,0x00,0x00,0xF8,0x7F,0x00,0x00,0x00,0xFC,0x7F,0x00,0x00,
0x00,0xFC,0x7F,0x00,0x00,0x00,0xFE,0x7F,0x00,0x00,0x00,0xFE,0x7F,0x00,0x00,0x00,
0xFF,0x7F,0x00,0x00,0x80,0xFF,0x7F,0x00,0x00,0x80,0xFF,0x7F,0x00,0x00,0xC0,0xFF,
0x7F,0x00,0x00,0xE0,0xFF,0x7F,0x00,0x00,0xF0,0xFF,0x7F,0x00,0x00,0xFC,0xFF,0x7F,
0x00,0x00,0xFE,0xFF,0x7F,0x00,0x80,0xFF,0xFF,0x7F,0x00,0xE0,0xFF,0xFF,0x7F,0x00,
0xF0,0xFF,0xFF,0x7F,0x00,0xF0,0xFF,0xFF,0x7F,0x00,0xF0,0xFF,0xFF,0x7F,0x00,0xF0,
0xFF,0xFF,0x7F,0x00,0xF0,0xFF,0xFF,0x7F,0x00,0xF0,0xFF,0xFF,0x7F,0x00,0xF0,0xFF,
0xFF,0x7F,0x00,0xF0,0xFF,0xFF,0x7F,0x00,0xF0,0xFF,0xFE,0x7F,0x00,0xF0,0x7F,0xFE,
0x7F,0x00,0xF0,0x1F,0xFE,0x7F,0x00,0xF0,0x07,0xFE,0x7F,0x00,0xF0,0x01,0xFE,0x7F,
0x00,0x70,0x00,0xFE,0x7F,0x00,0x00,0x00,0xFE,0x7F,0x00,0x00,0x00,0xFE,0x7F,0x00,
0x00,0x00,0xFE,0x7F,0x00,0x00,0x00,0xFE,0x7F,0x00,0x00,0x00,0xFE,0x7F,0x00,0x00,
0x00,0xFE,0x7F,0x00,0x00,0x00,0xFE,0x7F,0x00,0x00,0x00,0xFE,0x7F,0x00,0x00,0x00,
0xFE,0x7F,0x00,0x00,0x00,0xFE,0x7F,0x00,0x00,0x00,0xFE,0x7F,0x00,0x00,0x00,0xFE,
0x7F,0x00,0x00,0x00,0xFE,0x7F,0x00,0x00,0x00,0xFE,0x7F,0x00,0x00,0x00,0xFE,0x7F,
0x00,0x00,0x00,0xFE,0x7F,0x00,0x00,0x00,0xFE,0x7F,0x00,0x00,0x00,0xFE,0x7F,0x00,
0x00,0x00,0xFE,0x7F,0x00,0x00,0x00,0xFE,0x7F,0x00,0x00,0x00,0xFE,0x7F,0x00,0x00,
0x00,0xFE,0x7F,0x00,0x00,0x00,0xFE,0x7F,0x00,0x00,0x00,0xFE,0x7F,0x00,0x00,0x00,
0xFE,0x7F,0x00,0x00,0x00,0xFE,0x7F,0x00,0x00,0x00,0xFE,0x7F,0x00,0x00,0x00,0xFE,
0x7F,0x00,0x00,0x00,0xFE,0x7F,0x00,0x00,0x00,0xFE,0x7F,0x00,/*"G:\PCtoLCD\1.bmp",0*/

0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xFF,0x07,0x00,0x00,0xF8,0xFF,0x3F,0x00,0x00,
0xFC,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0xFF,0x01,0x80,0xFF,0xFF,0xFF,0x03,0x80,0xFF,
0xFF,0xFF,0x07,0xC0,0xFF,0xFF,0xFF,0x07,0xC0,0xFF,0xFF,0xFF,0x0F,0xE0,0xFF,0xFF,
0xFF,0x0F,0xE0,0xFF,0xFF,0xFF,0x1F,0xF0,0xFF,0xFF,0xFF,0x1F,0xF0,0xFF,0xFF,0xFF,
0x1F,0xF0,0xFF,0xCF,0xFF,0x3F,0xF0,0xFF,0x83,0xFF,0x3F,0xF8,0xFF,0x01,0xFF,0x3F,
0xF8,0xFF,0x01,0xFE,0x3F,0xF8,0xFF,0x01,0xFE,0x3F,0xF8,0xFF,0x00,0xFE,0x3F,0xF8,
0xFF,0x00,0xFE,0x3F,0x00,0xFE,0x00,0xFE,0x3F,0x00,0x00,0x00,0xFF,0x3F,0x00,0x00,
0x00,0xFF,0x3F,0x00,0x00,0x80,0xFF,0x1F,0x00,0x00,0x80,0xFF,0x1F,0x00,0x00,0xC0,
0xFF,0x1F,0x00,0x00,0xE0,0xFF,0x1F,0x00,0x00,0xF0,0xFF,0x0F,0x00,0x00,0xF8,0xFF,
0x0F,0x00,0x00,0xFC,0xFF,0x07,0x00,0x00,0xFE,0xFF,0x07,0x00,0x00,0xFF,0xFF,0x03,
0x00,0x80,0xFF,0xFF,0x01,0x00,0x80,0xFF,0xFF,0x01,0x00,0xC0,0xFF,0xFF,0x00,0x00,
0xE0,0xFF,0x7F,0x00,0x00,0xF0,0xFF,0x3F,0x00,0x00,0xF8,0xFF,0x1F,0x00,0x00,0xFC,
0xFF,0x0F,0x00,0x00,0xFE,0xFF,0x07,0x00,0x00,0xFE,0xFF,0x03,0x00,0x00,0xFF,0xFF,
0x01,0x00,0x80,0xFF,0xFF,0x00,0x00,0x80,0xFF,0x7F,0x00,0x00,0xC0,0xFF,0x3F,0x00,
0x00,0xC0,0xFF,0x3F,0x00,0x00,0xE0,0xFF,0xFF,0xFF,0x3F,0xE0,0xFF,0xFF,0xFF,0x3F,
0xF0,0xFF,0xFF,0xFF,0x3F,0xF0,0xFF,0xFF,0xFF,0x3F,0xF0,0xFF,0xFF,0xFF,0x3F,0xF8,
0xFF,0xFF,0xFF,0x3F,0xF8,0xFF,0xFF,0xFF,0x3F,0xF8,0xFF,0xFF,0xFF,0x3F,0xF8,0xFF,
0xFF,0xFF,0x3F,0xFC,0xFF,0xFF,0xFF,0x3F,0xFC,0xFF,0xFF,0xFF,0x3F,0xFC,0xFF,0xFF,
0xFF,0x3F,0xFC,0xFF,0xFF,0xFF,0x3F,0xFC,0xFF,0xFF,0xFF,0x3F,/*"G:\PCtoLCD\2.bmp",0*/



0x00,0x80,0xFF,0x07,0x00,0x00,0xF0,0xFF,0x3F,0x00,0x00,0xFC,0xFF,0x7F,0x00,0x00,
0xFE,0xFF,0xFF,0x01,0x00,0xFF,0xFF,0xFF,0x03,0x80,0xFF,0xFF,0xFF,0x03,0xC0,0xFF,
0xFF,0xFF,0x07,0xC0,0xFF,0xFF,0xFF,0x0F,0xE0,0xFF,0xFF,0xFF,0x0F,0xE0,0xFF,0xFF,
0xFF,0x0F,0xF0,0xFF,0xFF,0xFF,0x1F,0xF0,0xFF,0xFF,0xFF,0x1F,0xF0,0xFF,0xC7,0xFF,
0x1F,0xF8,0xFF,0x83,0xFF,0x1F,0xF8,0xFF,0x01,0xFF,0x1F,0xF8,0xFF,0x01,0xFF,0x1F,
0xF8,0xFF,0x00,0xFF,0x1F,0x80,0xFF,0x00,0xFF,0x1F,0x00,0xF0,0x80,0xFF,0x1F,0x00,
0x00,0x80,0xFF,0x1F,0x00,0x00,0xC0,0xFF,0x0F,0x00,0x00,0xF0,0xFF,0x0F,0x00,0x00,
0xFF,0xFF,0x0F,0x00,0x00,0xFF,0xFF,0x07,0x00,0x80,0xFF,0xFF,0x03,0x00,0x80,0xFF,
0xFF,0x03,0x00,0x80,0xFF,0xFF,0x01,0x00,0x80,0xFF,0xFF,0x01,0x00,0x80,0xFF,0xFF,
0x07,0x00,0x80,0xFF,0xFF,0x0F,0x00,0x80,0xFF,0xFF,0x0F,0x00,0x80,0xFF,0xFF,0x1F,
0x00,0x80,0xFF,0xFF,0x3F,0x00,0x80,0xFF,0xFF,0x3F,0x00,0x80,0xC3,0xFF,0x3F,0x00,
0x00,0x00,0xFF,0x7F,0x00,0x00,0x00,0xFE,0x7F,0x00,0x00,0x00,0xFE,0x7F,0x00,0x00,
0x00,0xFC,0x7F,0x00,0x00,0x00,0xFC,0x7F,0x00,0x00,0x00,0xFC,0x7F,0x00,0x00,0x00,
0xFC,0x7F,0x00,0x7C,0x00,0xFC,0x7F,0xF8,0x7F,0x00,0xFC,0x7F,0xFC,0xFF,0x00,0xFE,
0x7F,0xFC,0xFF,0x00,0xFE,0x7F,0xFC,0xFF,0x01,0xFF,0x3F,0xF8,0xFF,0x03,0xFF,0x3F,
0xF8,0xFF,0xC7,0xFF,0x3F,0xF8,0xFF,0xFF,0xFF,0x3F,0xF0,0xFF,0xFF,0xFF,0x1F,0xF0,
0xFF,0xFF,0xFF,0x1F,0xE0,0xFF,0xFF,0xFF,0x0F,0xE0,0xFF,0xFF,0xFF,0x0F,0xC0,0xFF,
0xFF,0xFF,0x07,0x80,0xFF,0xFF,0xFF,0x07,0x80,0xFF,0xFF,0xFF,0x03,0x00,0xFF,0xFF,
0xFF,0x01,0x00,0xFC,0xFF,0x7F,0x00,0x00,0xF0,0xFF,0x3F,0x00,/*"G:\PCtoLCD\3.bmp",*/



0x00,0x00,0xC0,0xFF,0x0F,0x00,0x00,0xE0,0xFF,0x0F,0x00,0x00,0xE0,0xFF,0x0F,0x00,
0x00,0xF0,0xFF,0x0F,0x00,0x00,0xF8,0xFF,0x0F,0x00,0x00,0xF8,0xFF,0x0F,0x00,0x00,
0xFC,0xFF,0x0F,0x00,0x00,0xFC,0xFF,0x0F,0x00,0x00,0xFE,0xFF,0x0F,0x00,0x00,0xFF,
0xFF,0x0F,0x00,0x00,0xFF,0xFF,0x0F,0x00,0x80,0xFF,0xFF,0x0F,0x00,0x80,0xFF,0xFF,
0x0F,0x00,0xC0,0xFF,0xFF,0x0F,0x00,0xE0,0xFF,0xFF,0x0F,0x00,0xE0,0xFF,0xFF,0x0F,
0x00,0xF0,0xFF,0xFF,0x0F,0x00,0xF0,0xFF,0xFF,0x0F,0x00,0xF8,0xFF,0xFF,0x0F,0x00,
0xFC,0xFF,0xFF,0x0F,0x00,0xFC,0xFF,0xFF,0x0F,0x00,0xFE,0xFF,0xFF,0x0F,0x00,0xFE,
0xFF,0xFF,0x0F,0x00,0xFF,0xDF,0xFF,0x0F,0x00,0xFF,0xCF,0xFF,0x0F,0x80,0xFF,0xCF,
0xFF,0x0F,0xC0,0xFF,0xC7,0xFF,0x0F,0xC0,0xFF,0xC7,0xFF,0x0F,0xE0,0xFF,0xC3,0xFF,
0x0F,0xE0,0xFF,0xC1,0xFF,0x0F,0xF0,0xFF,0xC1,0xFF,0x0F,0xF8,0xFF,0xC0,0xFF,0x0F,
0xF8,0xFF,0xC0,0xFF,0x0F,0xFC,0x7F,0xC0,0xFF,0x0F,0xFC,0x3F,0xC0,0xFF,0x0F,0xFE,
0x3F,0xC0,0xFF,0x0F,0xFE,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,
0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,
0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,
0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,
0xFE,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0xC0,0xFF,0x0F,0x00,
0x00,0xC0,0xFF,0x0F,0x00,0x00,0xC0,0xFF,0x0F,0x00,0x00,0xC0,0xFF,0x0F,0x00,0x00,
0xC0,0xFF,0x0F,0x00,0x00,0xC0,0xFF,0x0F,0x00,0x00,0xC0,0xFF,0x0F,0x00,0x00,0xC0,
0xFF,0x0F,0x00,0x00,0xC0,0xFF,0x0F,0x00,0x00,0xC0,0xFF,0x0F,/*"G:\PCtoLCD\4.bmp",0*/

0x00,0xFF,0xFF,0xFF,0x7F,0x00,0xFF,0xFF,0xFF,0x7F,0x00,0xFF,0xFF,0xFF,0x7F,0x80,
0xFF,0xFF,0xFF,0x7F,0x80,0xFF,0xFF,0xFF,0x7F,0x80,0xFF,0xFF,0xFF,0x7F,0x80,0xFF,
0xFF,0xFF,0x7F,0x80,0xFF,0xFF,0xFF,0x7F,0x80,0xFF,0xFF,0xFF,0x7F,0x80,0xFF,0xFF,
0xFF,0x7F,0x80,0xFF,0xFF,0xFF,0x7F,0xC0,0xFF,0xFF,0xFF,0x7F,0xC0,0xFF,0xFF,0xFF,
0x7F,0xC0,0xFF,0x07,0x00,0x00,0xC0,0xFF,0x07,0x00,0x00,0xC0,0xFF,0x07,0x00,0x00,
0xC0,0xFF,0x07,0x00,0x00,0xC0,0xFF,0x07,0x00,0x00,0xC0,0xFF,0xE7,0x3F,0x00,0xE0,
0xFF,0xFF,0xFF,0x00,0xE0,0xFF,0xFF,0xFF,0x03,0xE0,0xFF,0xFF,0xFF,0x07,0xE0,0xFF,
0xFF,0xFF,0x0F,0xE0,0xFF,0xFF,0xFF,0x1F,0xE0,0xFF,0xFF,0xFF,0x3F,0xE0,0xFF,0xFF,
0xFF,0x3F,0xE0,0xFF,0xFF,0xFF,0x7F,0xF0,0xFF,0xFF,0xFF,0x7F,0xF0,0xFF,0xFF,0xFF,
0xFF,0xF0,0xFF,0xFF,0xFF,0xFF,0xF0,0xFF,0x8F,0xFF,0xFF,0xF0,0xFF,0x07,0xFE,0xFF,
0x80,0xFF,0x03,0xFE,0xFF,0x00,0xF0,0x01,0xFC,0xFF,0x00,0x00,0x00,0xFC,0xFF,0x00,
0x00,0x00,0xF8,0xFF,0x00,0x00,0x00,0xF8,0xFF,0x00,0x00,0x00,0xF8,0xFF,0x00,0x00,
0x00,0xF8,0xFF,0x00,0x00,0x00,0xF8,0xFF,0x00,0xF8,0x00,0xF8,0xFF,0xF0,0xFF,0x00,
0xF8,0xFF,0xFC,0xFF,0x00,0xF8,0xFF,0xFC,0xFF,0x01,0xFC,0xFF,0xFC,0xFF,0x01,0xFC,
0xFF,0xF8,0xFF,0x03,0xFE,0xFF,0xF8,0xFF,0x07,0xFF,0xFF,0xF8,0xFF,0x8F,0xFF,0x7F,
0xF0,0xFF,0xFF,0xFF,0x7F,0xF0,0xFF,0xFF,0xFF,0x7F,0xF0,0xFF,0xFF,0xFF,0x3F,0xE0,
0xFF,0xFF,0xFF,0x3F,0xC0,0xFF,0xFF,0xFF,0x1F,0xC0,0xFF,0xFF,0xFF,0x0F,0x80,0xFF,
0xFF,0xFF,0x0F,0x00,0xFF,0xFF,0xFF,0x07,0x00,0xFE,0xFF,0xFF,0x03,0x00,0xFC,0xFF,
0xFF,0x00,0x00,0xF0,0xFF,0x7F,0x00,0x00,0x00,0xFF,0x0F,0x00,/*"G:\PCtoLCD\5.bmp",0*/

0x00,0x80,0xFF,0x07,0x00,0x00,0xF0,0xFF,0x3F,0x00,0x00,0xF8,0xFF,0x7F,0x00,0x00,
0xFE,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0xFF,0x01,0x80,0xFF,0xFF,0xFF,0x03,0xC0,0xFF,
0xFF,0xFF,0x07,0xC0,0xFF,0xFF,0xFF,0x07,0xE0,0xFF,0xFF,0xFF,0x0F,0xE0,0xFF,0xFF,
0xFF,0x0F,0xF0,0xFF,0xFF,0xFF,0x1F,0xF0,0xFF,0xFF,0xFF,0x1F,0xF8,0xFF,0xEF,0xFF,
0x1F,0xF8,0xFF,0xC3,0xFF,0x3F,0xF8,0xFF,0x83,0xFF,0x3F,0xFC,0xFF,0x81,0xFF,0x3F,
0xFC,0xFF,0x01,0xFF,0x07,0xFC,0xFF,0x00,0x1F,0x00,0xFC,0xFF,0x00,0x00,0x00,0xFC,
0xFF,0x00,0x00,0x00,0xFC,0xFF,0x00,0x00,0x00,0xFE,0xFF,0xF0,0x0F,0x00,0xFE,0x7F,
0xFC,0x7F,0x00,0xFE,0x7F,0xFF,0xFF,0x00,0xFE,0xFF,0xFF,0xFF,0x01,0xFE,0xFF,0xFF,
0xFF,0x03,0xFE,0xFF,0xFF,0xFF,0x07,0xFE,0xFF,0xFF,0xFF,0x0F,0xFE,0xFF,0xFF,0xFF,
0x0F,0xFE,0xFF,0xFF,0xFF,0x1F,0xFE,0xFF,0xFF,0xFF,0x1F,0xFE,0xFF,0xFF,0xFF,0x3F,
0xFE,0xFF,0xFF,0xFF,0x3F,0xFE,0xFF,0xE7,0xFF,0x3F,0xFE,0xFF,0x83,0xFF,0x7F,0xFE,
0xFF,0x01,0xFF,0x7F,0xFE,0xFF,0x00,0xFF,0x7F,0xFE,0xFF,0x00,0xFE,0x7F,0xFE,0xFF,
0x00,0xFE,0x7F,0xFE,0x7F,0x00,0xFE,0x7F,0xFC,0x7F,0x00,0xFE,0x7F,0xFC,0x7F,0x00,
0xFE,0x7F,0xFC,0xFF,0x00,0xFE,0x7F,0xFC,0xFF,0x00,0xFE,0x7F,0xFC,0xFF,0x00,0xFF,
0x7F,0xF8,0xFF,0x01,0xFF,0x7F,0xF8,0xFF,0x83,0xFF,0x3F,0xF8,0xFF,0xC7,0xFF,0x3F,
0xF0,0xFF,0xFF,0xFF,0x3F,0xF0,0xFF,0xFF,0xFF,0x1F,0xE0,0xFF,0xFF,0xFF,0x1F,0xE0,
0xFF,0xFF,0xFF,0x1F,0xC0,0xFF,0xFF,0xFF,0x0F,0xC0,0xFF,0xFF,0xFF,0x07,0x80,0xFF,
0xFF,0xFF,0x07,0x00,0xFF,0xFF,0xFF,0x03,0x00,0xFE,0xFF,0xFF,0x01,0x00,0xFC,0xFF,
0xFF,0x00,0x00,0xF0,0xFF,0x3F,0x00,0x00,0x80,0xFF,0x07,0x00,/*"G:\PCtoLCD\6.bmp",0*/

0x00,0x00,0x00,0x00,0x00,0xFE,0xFF,0xFF,0xFF,0x3F,0xFE,0xFF,0xFF,0xFF,0x3F,0xFE,
0xFF,0xFF,0xFF,0x3F,0xFE,0xFF,0xFF,0xFF,0x3F,0xFE,0xFF,0xFF,0xFF,0x3F,0xFE,0xFF,
0xFF,0xFF,0x3F,0xFE,0xFF,0xFF,0xFF,0x3F,0xFE,0xFF,0xFF,0xFF,0x3F,0xFE,0xFF,0xFF,
0xFF,0x3F,0xFE,0xFF,0xFF,0xFF,0x3F,0xFE,0xFF,0xFF,0xFF,0x3F,0xFE,0xFF,0xFF,0xFF,
0x3F,0xFE,0xFF,0xFF,0xFF,0x1F,0xFE,0xFF,0xFF,0xFF,0x0F,0x00,0x00,0xE0,0xFF,0x0F,
0x00,0x00,0xE0,0xFF,0x07,0x00,0x00,0xF0,0xFF,0x03,0x00,0x00,0xF0,0xFF,0x01,0x00,
0x00,0xF8,0xFF,0x01,0x00,0x00,0xFC,0xFF,0x00,0x00,0x00,0xFC,0xFF,0x00,0x00,0x00,
0xFE,0x7F,0x00,0x00,0x00,0xFE,0x7F,0x00,0x00,0x00,0xFF,0x3F,0x00,0x00,0x00,0xFF,
0x3F,0x00,0x00,0x80,0xFF,0x1F,0x00,0x00,0x80,0xFF,0x1F,0x00,0x00,0x80,0xFF,0x0F,
0x00,0x00,0xC0,0xFF,0x0F,0x00,0x00,0xC0,0xFF,0x0F,0x00,0x00,0xE0,0xFF,0x07,0x00,
0x00,0xE0,0xFF,0x07,0x00,0x00,0xE0,0xFF,0x07,0x00,0x00,0xF0,0xFF,0x03,0x00,0x00,
0xF0,0xFF,0x03,0x00,0x00,0xF0,0xFF,0x03,0x00,0x00,0xF0,0xFF,0x01,0x00,0x00,0xF8,
0xFF,0x01,0x00,0x00,0xF8,0xFF,0x01,0x00,0x00,0xF8,0xFF,0x01,0x00,0x00,0xF8,0xFF,
0x00,0x00,0x00,0xFC,0xFF,0x00,0x00,0x00,0xFC,0xFF,0x00,0x00,0x00,0xFC,0xFF,0x00,
0x00,0x00,0xFC,0xFF,0x00,0x00,0x00,0xFC,0x7F,0x00,0x00,0x00,0xFE,0x7F,0x00,0x00,
0x00,0xFE,0x7F,0x00,0x00,0x00,0xFE,0x7F,0x00,0x00,0x00,0xFE,0x7F,0x00,0x00,0x00,
0xFE,0x7F,0x00,0x00,0x00,0xFE,0x7F,0x00,0x00,0x00,0xFE,0x3F,0x00,0x00,0x00,0xFF,
0x3F,0x00,0x00,0x00,0xFF,0x3F,0x00,0x00,0x00,0xFF,0x3F,0x00,0x00,0x00,0xFF,0x3F,
0x00,0x00,0x00,0xFF,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"G:\PCtoLCD\7.bmp",0*/

0x00,0xE0,0xFF,0x01,0x00,0x00,0xFC,0xFF,0x1F,0x00,0x00,0xFF,0xFF,0x7F,0x00,0x80,
0xFF,0xFF,0xFF,0x00,0xC0,0xFF,0xFF,0xFF,0x01,0xE0,0xFF,0xFF,0xFF,0x03,0xF0,0xFF,
0xFF,0xFF,0x07,0xF0,0xFF,0xFF,0xFF,0x07,0xF8,0xFF,0xFF,0xFF,0x0F,0xF8,0xFF,0xFF,
0xFF,0x0F,0xF8,0xFF,0xFF,0xFF,0x0F,0xFC,0xFF,0xFF,0xFF,0x1F,0xFC,0xFF,0xE3,0xFF,
0x1F,0xFC,0xFF,0xC1,0xFF,0x1F,0xFC,0xFF,0xC1,0xFF,0x1F,0xFC,0xFF,0x80,0xFF,0x1F,
0xFC,0xFF,0x80,0xFF,0x1F,0xFC,0xFF,0x80,0xFF,0x1F,0xFC,0xFF,0x81,0xFF,0x1F,0xFC,
0xFF,0xC1,0xFF,0x1F,0xF8,0xFF,0xE3,0xFF,0x0F,0xF8,0xFF,0xFF,0xFF,0x0F,0xF0,0xFF,
0xFF,0xFF,0x07,0xF0,0xFF,0xFF,0xFF,0x07,0xE0,0xFF,0xFF,0xFF,0x03,0xC0,0xFF,0xFF,
0xFF,0x01,0x80,0xFF,0xFF,0xFF,0x00,0x80,0xFF,0xFF,0xFF,0x00,0xE0,0xFF,0xFF,0xFF,
0x03,0xF0,0xFF,0xFF,0xFF,0x03,0xF0,0xFF,0xFF,0xFF,0x07,0xF8,0xFF,0xFF,0xFF,0x0F,
0xF8,0xFF,0xFF,0xFF,0x0F,0xFC,0xFF,0xF3,0xFF,0x1F,0xFC,0xFF,0xC1,0xFF,0x1F,0xFC,
0xFF,0x80,0xFF,0x1F,0xFE,0xFF,0x80,0xFF,0x3F,0xFE,0x7F,0x80,0xFF,0x3F,0xFE,0x7F,
0x00,0xFF,0x3F,0xFE,0x7F,0x00,0xFF,0x3F,0xFE,0x7F,0x00,0xFF,0x3F,0xFE,0x7F,0x00,
0xFF,0x3F,0xFE,0x7F,0x00,0xFF,0x3F,0xFE,0xFF,0x80,0xFF,0x3F,0xFE,0xFF,0x80,0xFF,
0x3F,0xFE,0xFF,0x81,0xFF,0x3F,0xFE,0xFF,0xC1,0xFF,0x3F,0xFC,0xFF,0xF7,0xFF,0x1F,
0xFC,0xFF,0xFF,0xFF,0x1F,0xFC,0xFF,0xFF,0xFF,0x1F,0xF8,0xFF,0xFF,0xFF,0x0F,0xF8,
0xFF,0xFF,0xFF,0x0F,0xF8,0xFF,0xFF,0xFF,0x07,0xF0,0xFF,0xFF,0xFF,0x07,0xE0,0xFF,
0xFF,0xFF,0x03,0xC0,0xFF,0xFF,0xFF,0x01,0x80,0xFF,0xFF,0xFF,0x00,0x00,0xFF,0xFF,
0x7F,0x00,0x00,0xFC,0xFF,0x1F,0x00,0x00,0xE0,0xFF,0x03,0x00,/*"G:\PCtoLCD\8.bmp",0*/

0x00,0xC0,0xFF,0x03,0x00,0x00,0xF8,0xFF,0x1F,0x00,0x00,0xFE,0xFF,0x7F,0x00,0x00,
0xFF,0xFF,0xFF,0x00,0x80,0xFF,0xFF,0xFF,0x01,0xC0,0xFF,0xFF,0xFF,0x03,0xC0,0xFF,
0xFF,0xFF,0x07,0xE0,0xFF,0xFF,0xFF,0x07,0xF0,0xFF,0xFF,0xFF,0x0F,0xF0,0xFF,0xFF,
0xFF,0x0F,0xF0,0xFF,0xFF,0xFF,0x1F,0xF8,0xFF,0xFF,0xFF,0x1F,0xF8,0xFF,0xC7,0xFF,
0x3F,0xF8,0xFF,0x83,0xFF,0x3F,0xFC,0xFF,0x01,0xFF,0x3F,0xFC,0xFF,0x01,0xFE,0x7F,
0xFC,0xFF,0x00,0xFE,0x7F,0xFC,0xFF,0x00,0xFE,0x7F,0xFC,0xFF,0x00,0xFE,0x7F,0xFC,
0xFF,0x00,0xFC,0x7F,0xFC,0xFF,0x00,0xFC,0xFF,0xFC,0xFF,0x00,0xFE,0xFF,0xFC,0xFF,
0x00,0xFE,0xFF,0xFC,0xFF,0x01,0xFE,0xFF,0xFC,0xFF,0x01,0xFF,0xFF,0xFC,0xFF,0x83,
0xFF,0xFF,0xF8,0xFF,0xC7,0xFF,0xFF,0xF8,0xFF,0xFF,0xFF,0xFF,0xF8,0xFF,0xFF,0xFF,
0xFF,0xF0,0xFF,0xFF,0xFF,0xFF,0xF0,0xFF,0xFF,0xFF,0xFF,0xE0,0xFF,0xFF,0xFF,0xFF,
0xE0,0xFF,0xFF,0xFF,0xFF,0xC0,0xFF,0xFF,0xFF,0xFF,0x80,0xFF,0xFF,0xFF,0xFF,0x00,
0xFF,0xFF,0xFF,0xFF,0x00,0xFE,0xFF,0xFD,0xFF,0x00,0xFC,0x7F,0xFE,0xFF,0x00,0xE0,
0x1F,0xFE,0xFF,0x00,0x00,0x00,0xFE,0x7F,0x00,0x00,0x00,0xFE,0x7F,0x00,0x00,0x00,
0xFE,0x7F,0x00,0xF0,0x01,0xFE,0x7F,0xC0,0xFF,0x01,0xFF,0x7F,0xF8,0xFF,0x03,0xFF,
0x7F,0xF8,0xFF,0x83,0xFF,0x3F,0xF8,0xFF,0x87,0xFF,0x3F,0xF0,0xFF,0xEF,0xFF,0x3F,
0xF0,0xFF,0xFF,0xFF,0x1F,0xF0,0xFF,0xFF,0xFF,0x1F,0xE0,0xFF,0xFF,0xFF,0x0F,0xE0,
0xFF,0xFF,0xFF,0x0F,0xC0,0xFF,0xFF,0xFF,0x07,0xC0,0xFF,0xFF,0xFF,0x07,0x80,0xFF,
0xFF,0xFF,0x03,0x00,0xFF,0xFF,0xFF,0x01,0x00,0xFE,0xFF,0xFF,0x00,0x00,0xFC,0xFF,
0x3F,0x00,0x00,0xF8,0xFF,0x1F,0x00,0x00,0xC0,0xFF,0x03,0x00,/*"G:\PCtoLCD\9.BMP",0*/};

//BMP图像，低位在前，48x8，向下
const char ruller1[]={
0x01,0x00,0x00,0x00,0x00,0x80,0x01,0x00,0x80,0x01,0x00,0x80,0x01,0x18,0x80,0x01,
0x18,0x80,0x61,0x18,0x86,0x61,0x18,0x86,0x61,0x18,0x86,0x61,0x18,0x86,0x61,0x18,
0x86,0x61,0x18,0x86,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,/*"G:\PCtoLCD\ruller.BMP",0*/
};

//指南针标尺，向下
const char ruller2[]={
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x61,0x18,0x86,0x61,
0x18,0x86,0x61,0x18,0x86,0x61,0x18,0x86,0x61,0x18,0x86,0x61,0x18,0x86,0x01,0x18,
0x80,0x01,0x18,0x80,0x01,0x00,0x80,0x01,0x00,0x80,0x01,0x00,0x00,0x00,0x00,0x80
};

//指南针标尺，向下,小，48*6

const char ruller[]={
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x61,0x18,0x86,0x61,0x18,0x86,0x60,0x18,0x86,0x61,
0x18,0x06,0x00,0x18,0x80,0x01,0x18,0x00,0x00,0x00,0x80,0x01,0x00,0x00,0x00,0x00,
0x80,0x01,0x00,0x00/*"G:\PCtoLCD\ruller small.BMP",0*/
};

/* 8x8 箭头向上
const char arrow1[]=
{

0x0C,0x0C,0x1E,0x1E,0x1E,0x3F,0x3F,0x3F,};
*/


//8x4 箭头向下
const char arrow[]=
{
	
0x1C,0x1C,0x1C,0x08 /*"G:\PCtoLCD\little triangle.BMP",0*/
	
};

/*/8x8 箭头向下
const char arrow[]=
{
0x7F,0x7F,0x3E,0x3E,0x1C,0x1C,0x08,0x08
};
*/


const char HZ_12X12[]={

0x30,0x00,0x30,0x00,0xFF,0x0F,0x18,0x00,0x6C,0x00,0x66,0x00,0xFE,0x07,0x60,0x00,
0x6C,0x03,0x66,0x06,0x63,0x0C,0x70,0x00,/*"东",0*/

0x60,0x00,0xFF,0x0F,0x60,0x00,0xFE,0x07,0x9E,0x07,0xF6,0x06,0xFE,0x07,0x66,0x06,
0xFE,0x07,0x66,0x06,0x66,0x06,0x86,0x07,/*"南",1*/

0xFF,0x0F,0xF0,0x00,0xF0,0x00,0xFE,0x07,0xF6,0x06,0xF6,0x06,0xF6,0x06,0x9E,0x07,
0x0E,0x06,0x06,0x06,0xFE,0x07,0x06,0x06,/*"西",2*/

0xD8,0x00,0xD8,0x00,0xD8,0x0C,0xD8,0x06,0xDF,0x03,0xD8,0x01,0xD8,0x00,0xD8,0x00,
0xDC,0x00,0xDF,0x0C,0xD8,0x0C,0x98,0x0F,/*"北",3*/
	
0x10,0x00,0x10,0x00,0xFF,0x01,0x11,0x01,0x11,0x01,0xFF,0x01,0x11,0x01,0x11,0x01,
0xFF,0x01,0x11,0x04,0x10,0x04,0xE0,0x07,/*"电",4*/

0x00,0x00,0xFE,0x07,0x02,0x00,0x42,0x00,0x42,0x00,0x42,0x00,0xFA,0x03,0x42,0x00,
0x42,0x01,0x42,0x02,0x42,0x00,0xFD,0x07,/*"压",5*/

0x40,0x00,0x81,0x00,0xFA,0x07,0x20,0x00,0x10,0x02,0xF9,0x07,0x02,0x04,0x50,0x01,
0x50,0x01,0x52,0x05,0x49,0x05,0x44,0x06,/*"流",6*/

0xFE,0x03,0x22,0x02,0x42,0x02,0xFF,0x07,0x22,0x02,0xFE,0x03,0x22,0x02,0xFE,0x03,
0x20,0x00,0xFE,0x03,0x20,0x00,0xFF,0x07,/*"量",7*/

0xF0,0x01,0x11,0x01,0xF2,0x01,0x10,0x01,0xF0,0x01,0x01,0x00,0xFA,0x03,0xA8,0x02,
0xAC,0x02,0xAA,0x02,0xA9,0x02,0xFC,0x07,/*"温",8*/

0x40,0x00,0xFE,0x07,0x12,0x01,0xFE,0x07,0x12,0x01,0xF2,0x01,0x02,0x00,0xFA,0x03,
0x12,0x02,0x22,0x01,0xC2,0x00,0x39,0x07,/*"度",9*/

0x04,0x01,0x88,0x00,0xFE,0x03,0x02,0x02,0x02,0x02,0x02,0x02,0xFE,0x03,0x00,0x00,
0x20,0x02,0x4A,0x04,0x0A,0x05,0xF1,0x01,/*"总",10*/

0xFE,0x03,0x22,0x02,0x22,0x02,0xFE,0x03,0x22,0x02,0x22,0x02,0xFE,0x03,0x20,0x00,
0xFE,0x03,0x20,0x00,0x20,0x00,0xFF,0x07,/*"里",11*/

0xE8,0x03,0x27,0x02,0x24,0x02,0xE4,0x03,0x0F,0x00,0xE4,0x03,0x8E,0x00,0x96,0x00,
0xE5,0x03,0x84,0x00,0x84,0x00,0xF4,0x07,/*"程",12*/

0x84,0x00,0xE4,0x03,0x82,0x00,0xE9,0x07,0x07,0x04,0x44,0x01,0xA2,0x01,0x4F,0x01,
0xF0,0x07,0x8C,0x00,0x43,0x02,0x30,0x04,/*"续",13*/

0x84,0x00,0x1E,0x01,0xF2,0x07,0x16,0x00,0x1A,0x00,0xD2,0x01,0x5F,0x01,0x52,0x01,
0x56,0x01,0x5A,0x05,0x32,0x05,0x19,0x06,/*"航",14*/
	
};

//摄氏度 12x12
const char Degree[]=
{ 

0x86,0x03,0xC9,0x07,0x69,0x0C,0x36,0x08,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,
0x30,0x08,0x60,0x0C,0xC0,0x07,0x80,0x03,/*"G:\PCtoLCD\C_degree.BMP",0*/
};

//方向
const char ESWN[]=
{
	 
0x1F,0x12,0x0A,0x0E,0x0A,0x02,0x12,0x1F,/*"E",1*/
0x1E,0x11,0x01,0x06,0x08,0x10,0x11,0x0F,/*"S",2*/	
0x15,0x15,0x15,0x15,0x0E,0x0A,0x0A,0x0A,/*"W",3*/	
0x3B,0x12,0x16,0x16,0x1A,0x1A,0x12,0x17,/*"N",4*/

};
