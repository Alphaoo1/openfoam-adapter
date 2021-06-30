
The PR contains the edits required for doing Volume coupling.

Added `locationsType == "volSurf"`

This is to transfer information at internal volumetric faces, i.e., the internalField of any surfaceScalarField (for eg., phi) 

## Usage: 

in `Fluid/system/preciceDict`

```
interfaces
{
  Interface1
  {
    mesh              Fluid-Mesh-PV;
    patches           ();
    locations         volSurf;
    
    readData
    (
        Volume_field_data_to_read
    );
    
    writeData
    (
        Volume_field_data_to_write
    );
  };
};

```
