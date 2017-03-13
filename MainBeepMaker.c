//BeepMaker

#include <stdio.h>
#include <windows.h>

#include "notes.h"

int main()
{
	float note, time_of_note;
	int duration, number_of_note;
	const char LEAVING[MAXNAME] = "...";
	char input_note[MAXNAME];

	printf("Welcome to BeepMaker!\nEnter names of notes and durations in format -d5/8 0d5/4 +f5/2 ...\n");
	printf("0 is without alteration, - is flat, + is sharp.\nNext name of note.\nThen number of octave in range from 0 to 8.\n");
	printf("After / is duration of notes.(1, 2, 4, 8, 16 or 32)\n... is ending of input.\nStart input: ");

	for (scanf("%3s/%d ", input_note, &duration); strcmp(input_note, LEAVING); Beep(note, time_of_note))
	{

		for(number_of_note = 0; strcmp(input_note, data_of_notes[number_of_note].name_of_note); number_of_note++);

		note = *data_of_notes[number_of_note].frequency;

		time_of_note = 4000. / duration;

		scanf("%3s/%d ", input_note, &duration);
	}

	printf("Done!\nSee you!\n");

	return 0;
}
