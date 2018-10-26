void main(void)
{
    Uint8 u8_dummy = 0;
    
    for( Uint8 i = 0; i < 5; i++)
    {
        u8_dummy++;
    }
    
    if( u8_dummy != 5 )
    {
        u8_dummy = 5;
    }
    
    return;
}