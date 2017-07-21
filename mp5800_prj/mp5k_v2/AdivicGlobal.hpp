#ifndef _ADIVIC_GLOABL_HPP_
#define _ADIVIC_GLOABL_HPP_

namespace internal {

//! Base class for types that should not be copied or assigned.
class no_copy
{
private:    
    no_copy( const no_copy& other);
    no_copy& operator=(const no_copy&);
public:
    no_copy() {};
};

}

#endif