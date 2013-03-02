/*
 Function to represent Horizontal Sine Wave
*/


void SineWave :: horizontalWave ()
{   
    
    reset();  //reset the values 
    
    //empty spaces to every location in array
    for(row = 0; row <= sineHeight; row++)
	{ 
	    for(column = 0; column <= sineWidth; column++)
	    sine[row][column] = ' ';
	}

	//to draw x-axis of graph               
	for(column = originX; column <= originX + sineWidth1; column++)  
	{   
	    row = originY; 
	    sine[row][column] = '-'; 
	}
	
	//to draw sine wave
	pointStartX = graphStart;
	for(int sineWaveX = originX; sineWaveX <= originX + sineWidth1; sineWaveX++)      
	{
	    double sineWaveY = sin(pointStartX);
        double sineWaveY1 = - sineWaveY * (( middleOfGraphHeight / 5 ) * scalingFactor ) + originY;                
        int sineWaveY2 = round(sineWaveY1);
        sine[sineWaveY2][sineWaveX] = '*';
        pointStartX += unitStepX;
    }

	//Print the complete array
	for(row = 0; row <= sineHeight; row++)
	{
	    for(column = 0; column <= sineWidth; column++)
	    { 
	        cout<<sine[row][column];
	    }
	    cout<<"\n";
	}

}
	

