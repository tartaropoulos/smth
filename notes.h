//Initialisation of structure for table of notes.
#ifndef NOTES_H
#define NOTES_H

#define MAXNAME  4
#define OCTAVES  9
#define NOTES   12

typedef struct
{
	char name_of_note[MAXNAME];
	float *frequency;
} notes;

float table_of_notes[OCTAVES][NOTES] =
		{//        C,      C#,       D,      D#,       E,       F,      F#,     G,     G#,     A,      A#,       B
			{  16.35,   17.32,   18.35,   19.45,   20.61,   21.82,   23.12,  24.5,  25.95, 27.50,   29.13,   30.87},//0
			{   32.7,   34.65,   36.95,   38.88,   41.21,   43.65,   46.25,   49.,   51.9,   55.,   58.26,   61.74},//1
			{  65.41,    69.3,   73.91,   77.78,   82.41,   87.31,    92.5,   98.,  103.8,  110.,  116.54,  123.48},//2
			{ 130.82,  138.59,  147.83,  155.56,  164.81,  174.62,    185.,  196.,  207.6,  220.,  233.08,  246.96},//3
			{ 261.63,  277.18,  293.66,  311.13,  329.63,  349.23,  369.99,  392.,  415.3,  440.,  466.16,  493.88},//4
			{ 523.26,  554.36,  587.32,  622.26,  659.26,  698.46,  739.98,  784.,  830.6,  880.,  932.32,  987.76},//5
			{1046.52, 1108.72, 1174.64, 1244.52, 1318.52, 1396.92, 1479.96, 1568., 1661.2, 1760., 1864.64, 1975.52},//6
			{2093.04, 2217.44, 2349.28, 2489.04, 2637.04, 2793.84, 2959.92, 3136., 3322.4, 3520., 3729.28, 3951.04},//7
			{4186.08, 4434.88, 4698.56, 4978.08, 5274.08, 5587.68, 5919.84, 6272., 6644.8, 7040., 7458.56, 7902.08} //8
		};

notes data_of_notes[] = {{"0c0", &table_of_notes[0][0]}, {"+c0", &table_of_notes[0][1] }, {"-d0", &table_of_notes[0][1] }, {"0d0", &table_of_notes[0][2] }, {"+d0", &table_of_notes[0][3]},//0-4
						 {"-e0", &table_of_notes[0][3]}, {"0e0", &table_of_notes[0][4] }, {"0f0", &table_of_notes[0][5] }, {"+f0", &table_of_notes[0][6] },								   //5-8
						 {"-g0", &table_of_notes[0][6]}, {"0g0", &table_of_notes[0][7] }, {"+g0", &table_of_notes[0][8] }, {"-a0", &table_of_notes[0][8] },								   //9-12
						 {"0a0", &table_of_notes[0][9]}, {"+a0", &table_of_notes[0][10]}, {"-b0", &table_of_notes[0][10]}, {"0bo", &table_of_notes[0][11]},								   //13-16
					  	 {"0c1", &table_of_notes[1][0]}, {"+c1", &table_of_notes[1][1] }, {"-d1", &table_of_notes[1][1] }, {"0d1", &table_of_notes[1][2] }, {"+d1", &table_of_notes[1][3]},//17-21
						 {"-e1", &table_of_notes[1][3]}, {"0e1", &table_of_notes[1][4] }, {"0f1", &table_of_notes[1][5] }, {"+f1", &table_of_notes[1][6] },								   //22-25
						 {"-g1", &table_of_notes[1][6]}, {"0g1", &table_of_notes[1][7] }, {"+g1", &table_of_notes[1][8] }, {"-a1", &table_of_notes[1][8] },								   //26-29
 						 {"0a1", &table_of_notes[1][9]}, {"+a1", &table_of_notes[1][10]}, {"-b1", &table_of_notes[1][10]}, {"0b1", &table_of_notes[1][11]},								   //30-33
						 {"0c2", &table_of_notes[2][0]}, {"+c2", &table_of_notes[2][1] }, {"-d2", &table_of_notes[2][1] }, {"0d2", &table_of_notes[2][2] }, {"+d2", &table_of_notes[2][3]},//34-38
						 {"-e2", &table_of_notes[2][3]}, {"0e2", &table_of_notes[2][4] }, {"0f2", &table_of_notes[2][5] }, {"+f2", &table_of_notes[2][6] },								   //39-42
						 {"-g2", &table_of_notes[2][6]}, {"0g2", &table_of_notes[2][7] }, {"+g2", &table_of_notes[2][8] }, {"-a2", &table_of_notes[2][8] },								   //43-46
						 {"0a2", &table_of_notes[2][9]}, {"+a2", &table_of_notes[2][10]}, {"-b2", &table_of_notes[2][10]}, {"0b2", &table_of_notes[2][11]},								   //47-50
						 {"0c3", &table_of_notes[3][0]}, {"+c3", &table_of_notes[3][1] }, {"-d3", &table_of_notes[3][1] }, {"0d3", &table_of_notes[3][2] }, {"+d3", &table_of_notes[3][3]},//51-55
						 {"-e3", &table_of_notes[3][3]}, {"0e3", &table_of_notes[3][4] }, {"0f3", &table_of_notes[3][5] }, {"+f3", &table_of_notes[3][6] },								   //56-59
						 {"-g3", &table_of_notes[3][6]}, {"0g3", &table_of_notes[3][7] }, {"+g3", &table_of_notes[3][8] }, {"-a3", &table_of_notes[3][8] },								   //60-63
						 {"0a3", &table_of_notes[3][9]}, {"+a3", &table_of_notes[3][10]}, {"-b3", &table_of_notes[3][10]}, {"0b3", &table_of_notes[3][11]},								   //64-67
						 {"0c4", &table_of_notes[4][0]}, {"+c4", &table_of_notes[4][1] }, {"-d4", &table_of_notes[4][1] }, {"0d4", &table_of_notes[4][2] }, {"+d4", &table_of_notes[4][3]},//68-72
						 {"-e4", &table_of_notes[4][3]}, {"0e4", &table_of_notes[4][4] }, {"0f4", &table_of_notes[4][5] }, {"+f4", &table_of_notes[4][6] },								   //73-76
						 {"-g4", &table_of_notes[4][6]}, {"0g4", &table_of_notes[4][7] }, {"+g4", &table_of_notes[4][8] }, {"-a4", &table_of_notes[4][8] },								   //77-80
						 {"0a4", &table_of_notes[4][9]}, {"+a4", &table_of_notes[4][10]}, {"-b4", &table_of_notes[4][10]}, {"0b4", &table_of_notes[4][11]},								   //81-84
						 {"0c5", &table_of_notes[5][0]}, {"+c5", &table_of_notes[5][1] }, {"-d5", &table_of_notes[5][1] }, {"0d5", &table_of_notes[5][2] }, {"+d5", &table_of_notes[5][3]},//85-89
						 {"-e5", &table_of_notes[5][3]}, {"0e5", &table_of_notes[5][4] }, {"0f5", &table_of_notes[5][5] }, {"+f5", &table_of_notes[5][6] },								   //90-93
						 {"-g5", &table_of_notes[5][6]}, {"0g5", &table_of_notes[5][7] }, {"+g5", &table_of_notes[5][8] }, {"-a5", &table_of_notes[5][8] },								   //94-97
						 {"0a5", &table_of_notes[5][9]}, {"+a5", &table_of_notes[5][10]}, {"-b5", &table_of_notes[5][10]}, {"0b5", &table_of_notes[5][11]},								   //98-101
						 {"0c6", &table_of_notes[6][0]}, {"+c6", &table_of_notes[6][1] }, {"-d6", &table_of_notes[6][1] }, {"0d6", &table_of_notes[6][2] }, {"+d6", &table_of_notes[6][3]},//102-106
						 {"-e6", &table_of_notes[6][3]}, {"0e6", &table_of_notes[6][4] }, {"0f6", &table_of_notes[6][5] }, {"+f6", &table_of_notes[6][6] },								   //107-110
						 {"-g6", &table_of_notes[6][6]}, {"0g6", &table_of_notes[6][7] }, {"+g6", &table_of_notes[6][8] }, {"-a6", &table_of_notes[6][8] },								   //111-114
						 {"0a6", &table_of_notes[6][9]}, {"+a6", &table_of_notes[6][10]}, {"-b6", &table_of_notes[6][10]}, {"0b6", &table_of_notes[6][11]},								   //115-118
						 {"0c7", &table_of_notes[7][0]}, {"+c7", &table_of_notes[7][1] }, {"-d7", &table_of_notes[7][1] }, {"0d7", &table_of_notes[7][2] }, {"+d7", &table_of_notes[7][3]},//119-123
						 {"-e7", &table_of_notes[7][3]}, {"0e7", &table_of_notes[7][4] }, {"0f7", &table_of_notes[7][5] }, {"+f7", &table_of_notes[7][6] },								   //124-127
						 {"-g7", &table_of_notes[7][6]}, {"0g7", &table_of_notes[7][7] }, {"+g7", &table_of_notes[7][8] }, {"-a7", &table_of_notes[7][8] },								   //128-131
						 {"0a7", &table_of_notes[7][9]}, {"+a7", &table_of_notes[7][10]}, {"-b7", &table_of_notes[7][10]}, {"0b7", &table_of_notes[7][11]},								   //132-135
						 {"0c8", &table_of_notes[8][0]}, {"+c8", &table_of_notes[8][1] }, {"-d8", &table_of_notes[8][1] }, {"0d8", &table_of_notes[8][2] }, {"+d8", &table_of_notes[8][3]},//136-140
						 {"-e8", &table_of_notes[8][3]}, {"0e8", &table_of_notes[8][4] }, {"0f8", &table_of_notes[8][5] }, {"+f8", &table_of_notes[8][6] },								   //141-144
						 {"-g8", &table_of_notes[8][6]}, {"0g8", &table_of_notes[8][7] }, {"+g8", &table_of_notes[8][8] }, {"-a8", &table_of_notes[8][8] },								   //145-148
						 {"0a8", &table_of_notes[8][9]}, {"+a8", &table_of_notes[8][10]}, {"-b8", &table_of_notes[8][10]}, {"0b8", &table_of_notes[8][11]}};							   //149-152

#endif
