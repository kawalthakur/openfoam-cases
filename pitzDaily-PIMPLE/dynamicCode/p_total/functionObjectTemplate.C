/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | www.openfoam.com
     \\/     M anipulation  |
-------------------------------------------------------------------------------
    Copyright (C) 2019-2021 OpenCFD Ltd.
    Copyright (C) YEAR AUTHOR, AFFILIATION
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

\*---------------------------------------------------------------------------*/

#include "functionObjectTemplate.H"
#define namespaceFoam  // Suppress <using namespace Foam;>
#include "fvCFD.H"
#include "unitConversion.H"
#include "addToRunTimeSelectionTable.H"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{

// * * * * * * * * * * * * * * Static Data Members * * * * * * * * * * * * * //

defineTypeNameAndDebug(p_totalFunctionObject, 0);

addRemovableToRunTimeSelectionTable
(
    functionObject,
    p_totalFunctionObject,
    dictionary
);


// * * * * * * * * * * * * * * * Global Functions  * * * * * * * * * * * * * //

// dynamicCode:
// SHA1 = 63cb36388b2bfdf7dd572bfb22ba3ad48db5efc8
//
// unique function name that can be checked if the correct library version
// has been loaded
extern "C" void p_total_63cb36388b2bfdf7dd572bfb22ba3ad48db5efc8(bool load)
{
    if (load)
    {
        // Code that can be explicitly executed after loading
    }
    else
    {
        // Code that can be explicitly executed before unloading
    }
}


// * * * * * * * * * * * * * * * Local Functions * * * * * * * * * * * * * * //

//{{{ begin localCode

//}}} end localCode

} // End namespace Foam


// * * * * * * * * * * * * * Private Member Functions  * * * * * * * * * * * //

const Foam::fvMesh&
Foam::p_totalFunctionObject::mesh() const
{
    return refCast<const fvMesh>(obr_);
}


// * * * * * * * * * * * * * * * * Constructors  * * * * * * * * * * * * * * //

Foam::
p_totalFunctionObject::
p_totalFunctionObject
(
    const word& name,
    const Time& runTime,
    const dictionary& dict
)
:
    functionObjects::regionFunctionObject(name, runTime, dict)
{
    read(dict);
}


// * * * * * * * * * * * * * * * * Destructor  * * * * * * * * * * * * * * * //

Foam::
p_totalFunctionObject::
~p_totalFunctionObject()
{}


// * * * * * * * * * * * * * * * Member Functions  * * * * * * * * * * * * * //

bool
Foam::
p_totalFunctionObject::read(const dictionary& dict)
{
    if (false)
    {
        printMessage("read p_total");
    }

//{{{ begin code
    
//}}} end code

    return true;
}


bool
Foam::
p_totalFunctionObject::execute()
{
    if (false)
    {
        printMessage("execute p_total");
    }

//{{{ begin code
    
//}}} end code

    return true;
}


bool
Foam::
p_totalFunctionObject::write()
{
    if (false)
    {
        printMessage("write p_total");
    }

//{{{ begin code
    #line 65 "/home/kawalth/Programs/OpenFOAM/kawalth-v2206/run/openfoam-cases/pitzDaily-PIMPLE/system/controlDict.functions.p_total"
const volVectorField& U = mesh().lookupObject<volVectorField>("U");
            const volScalarField& p = mesh().lookupObject<volScalarField>("p");  
            Info << "Creating a p_total IOobject\n";  
            volScalarField p_total
            (
                IOobject
                (
                    "p_total",
                    mesh().time().timeName(),
                    mesh(),
                    IOobject::MUST_READ,
                    IOobject::AUTO_WRITE
                ),
                p + 0.5*magSqr(U)
            );
            Info << "Writing the p_total to the timeName\n";
            p_total().write();
//}}} end code

    return true;
}


bool
Foam::
p_totalFunctionObject::end()
{
    if (false)
    {
        printMessage("end p_total");
    }

//{{{ begin code
    
//}}} end code

    return true;
}


// ************************************************************************* //

