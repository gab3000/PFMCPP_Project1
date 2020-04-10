#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 
 5) When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       keyboard
//  action 1:   the keyboard emmits sound
keyboard.emmitSound();
//  action 2:   the keyboard send midi notes
keyboard.sendMidiNote();
//  action 3:   the keyboard send program change
keyboard.sendProgramChange(); 
//  2)
//  Noun:       synthModule
//  action 1:   the synthModule sends midi clock
synthModule.sendMidiClock();
//  action 2:   the synthModule blinks the led
synthModule.blinkLed();
//  action 3:   the synthModule displays patch number
synthModule.displayPatchNumber(); 
//  3)
//  Noun:       guitar
//  action 1:   the guitar emmit sound
guitar.emmitSound();
//  action 2:   the guitar detunes
guitar.detune();
//  action 3:   the guitar resonates
guitar.resonate(); 
//  4)
//  Noun:       microphone
//  action 1:   the microphone sends a signal
microphone.sendSignal();
//  action 2:   the microphone sends noise
microphone.sendNoise();
//  action 3:   the microphone pad the signal 10dB
microphone.pad10db();
//  5)
//  Noun:       preamp
//  action 1:   the preamp amplifies the signal
preamp.amplifySignal();
//  action 2:   the preamp switches polarity
preamp.switchPolarity();
//  action 3:   the preamp adapt impedance
preamp.adaptImpedance();
//  6)
//  Noun:       guitarAmp
//  action 1:   guitar amplifier generates Sound
guitarAmp.generatesSound();
//  action 2:   guitar amplifier adds reverb
guitarAmp.addReverb();
//  action 3:   guitar amp generates heat
guitarAmp.generateHeat();
//  7)
//  Noun:   overdrive pedal
//  action 1:   the overdrive pedal distorts the signal
overdrivePedal.distortSignal();
//  action 2:   the overdrive pedal adds noise
overdrivePedal.addNoise();
//  action 3:   the overdrive pedal depletes the battery
overdrivePedal.depleteBattery();
//  8)
//  Noun:       midi router
//  action 1:   the midi router filters program changes 
midiRouter.filterProgramChange();
//  action 2:   the midi router changes midi channel
midiRouter.changeMidiChannel();
//  action 3:   the midi router store a patch
midiRouter.storePatch();
//  9)
//  Noun:       DAW
//  action 1:   the daw plays midi sequence
daw.playMidi();
//  action 2:   the daw displays a message
daw.displayMessage();
//  action 3:   the daw auto saves project
daw.autoSaveProject();
//  10)
//  Noun:       plugin
//  action 1:   the plugin updates gui
plugin.udateGui();
//  action 2:   the plugin stores configuration
plugin.storeConfiguration();
//  action 3:   the plugin generates audio data
plugin.generateAudioData();


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
