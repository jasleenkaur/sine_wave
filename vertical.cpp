/*
 Function to represent Vertical Sine Wave
*/


void SineWave :: verticalWave ()
{ 
 
    reset();  //reset the values 
    
    //empty spaces to every location in array
    for(row = 0; row <= sineHeight; row++)
	{
	    for(column = 0; column <= sineWidth; column++)
	    sine[row][column] = ' ';
	}
	
	//to draw x-axis of graph    
	             
	for(row = originY; row <= originY + sineHeight1; row++)
    {   
        column = originX;  
        sine[row][column] = '|';
    }	    

    //to draw sine wave
    int sineWaveY = originY;
    for(double sineWaveX = graphStart; sineWaveX <= graphEnd; sineWaveX += unitStepY)
    { 
		double pointStartX = sin(sineWaveX);
		double pointStartX1 = pointStartX * ( ( middleOfGraphWidth / 5 ) * scalingFactor ) + originX;                                  
		int pointStartX2 = round(pointStartX1);
		sine[sineWaveY][pointStartX2] = '*';
		sineWaveY++;
    }
	
	
	//Print the complete array
    for(row = 0; row <= sineHeight; row++)
	{
	    for(column = 0; column <= sineWidth; column++)
	    {
	        cout<<sine[row][column];
	    }
	    cout<<endl;
    }
    
}

    
