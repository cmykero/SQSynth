/*
  ==============================================================================

    SynthVoice.h
    Created: 26 Feb 2019 12:15:33pm
    Author:  kerom

  ==============================================================================
*/

#pragma once


#include "../JuceLibraryCode/JuceHeader.h"
#include "SynthSound.h"

class SynthVoice : public SynthesiserVoice
{

public:
	bool canPlaySound(SynthesiserSound* sound)
	{
		return dynamic_cast<SynthSound*>(sound) != nullptr;
	}//END CAN PLAY SOUND ======================

	void startNote(int midiNoteNumber, float velocity, SynthesiserSound* sound, int currentPitchWheelPosition)
	{
		frequency = MidiMessage::getMidiNoteInHertz(midiNoteNumber);

		//Logger::outputDebugString(std::to_string(midiNoteNumber));
		std::cout << midiNoteNumber << std::endl;

	}//END START NOTE ===========================

	void StopNot(float velocity, bool allowTailOff)
	{
		clearCurrentNote();
	}//END STOP NOTE =============================
	
	void renderNextBlock(AudioBuffer<float>&outputBuffer, int startSample, int numSamples)
	{

	}//END RENDER BLOCK =============================

	void pitchWheelMoved(int newPitchWheelValue)
	{

	}// END PITCH WHEEL ============================

	void controllerMoved(int controllerNumber, int newControllerValue)
	{

	}//END CONTROLLER MOVE =========================

private:
	double level;
	double frequency;
};