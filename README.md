# STSDAS Nebular
This package is part of STSDAS and free of licensed codes, but does not exist in ST4GEM.

# Steps to install
1. Make sure you have correctly installed IRAF and ST4GEM in your system.
2. Declare environment variables.
  ``` bash
  export st4gem=${iraf}extern/st4gem/
  export st4gembin=${st4gem}bin/
  ```
3. Clone this project and move it to ST4GEM:
  ``` bash
  git clone git@github.com:LHe496/stsdas_nebula.git
  # or
  git clone https://github.com/LHe496/stsdas_nebula.git

  mv stsdas_nebula ${st4gem}pkg/analysis/nebular
  ```
4. Call mkpkg to compile and install it:
  ``` bash
  cd ${st4gem}pkg/analysis/nebular
  # First compile it
  mkpkg
  # Then install it
  mkpkg install
  ```
5. Add nebular to ST4GEM:
   - Edit ${st4gem}load.cl
  
     Add 'nebular' before 'keep'
   - Edit ${st4gem}pkg/analysis.cl
     ```
     # Insert this after 'set isophote   = "analysis$isophote/"'
     set nebular   = "analysis$nebular/"
     # Insert this after 'task isophote.pkg 	= "isophote$isophote.cl"'
     task nebular.pkg 	= "nebular$nbular.cl"
     ```
   - Edit ${st4gem}pkg/analysis.hd
     ```
     # Insert this after '$isophote	= "st4gem$pkg/analysis/isophote/"'
     $nebular	= "st4gem$pkg/analysis/nebular/"
     # Insert this at the end
     ebular		men=nebular$nebular.men,
		          hlp=..,
		          sys=nebular$nebular.hlp,
		          pkg=nebular$nebular.hd,
		          src=nebular$nebular.cl
     ```
   - (Optional) Edit ${st4gem}pkg/analysis.men
     ```
     # Insert this after 'isophote - Elliptical isophote image analysis.'
             nebular - Tasks for analyzing nebular emission lines
     ```
   - Call softools.mkhelpdb to generate helpdb.mip
     ``` bash
     # Open IRAF
     irafck
     # Go to softools
     ecl> softools
     # Call mkhelpdb to generate help database
     softools> mkhelpdb st4gem$st4gen.hd st4gem$lib/helpdb.mip
     ```
   - Add environment variable:
     ``` bash
     # path to atomic data
     export at_data=${iraf}extern/st4gem/pkg/analysis/nebular/atomic_data/
     ```
