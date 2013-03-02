/**
* reset() function will reset the values before use.
*
**/
void SineWave :: reset()
{   
    cout<<"\n\t\tEnter width and height of sine wave: ";
    cin>>sineWidth>>sineHeight;
    cout<<"\n\t\tEnter number of cycles you want: ";
    cin>>numberOfCycles;
    cout<<"\n\t\tEnter origin points of sine graph: ";
    cin>>originX>>originY;
    cout<<"\n\t\tEnter scaling factor you want (1 to 5): ";
    cin>>scalingFactor;
    
    sineWidth1 = (sineWidth / 5) * scalingFactor;
    sineHeight1 = (sineHeight /5) * scalingFactor;
    middleOfGraphHeight = sineHeight / 2;
    graphStart = 0.;
    graphEnd = 360. * numberOfCycles;
    graphStart *= M_PI / 180;
    graphEnd *= M_PI / 180;
    range = graphEnd - graphStart;
    unitStepX = range / sineWidth1;
    unitStepY = range / sineHeight1;
    middleOfGraphWidth = sineWidth / 2;
}
