/**
 * \file
 * @author dosetobi
 * @brief 
 * @version 0.1
 * @date 2022-04-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

/**
 * \brief Start brief with capital letter and end with dot.
 * \details Use explicit \details instead of leaving a blank line after \\brief.
 *          Other files.c or functions() will be linked by just writing their
 *          plain name, however #defines must be prefixed with \ref in order to
 *          get hyperlinked.
 * \pre The \pre command is useful for documenting _what_ must be done
 *      before this function _may_ be called.
 * \param[out] parm1 Description for output parameter
 * \param parm2 No [in] on input parameters
 * \param parm3 This one somehow relates to \p parm1
 * \return Result of computation
 */
int doxygen_example(){
    std::cout << " This is a doxygen example function";
    return 0;
}

/** 
 * \brief Brief main function description
 * \details A long description of the main function.
 */
int main() {
    std::cout << "Hello World!";
    return 0;
}
