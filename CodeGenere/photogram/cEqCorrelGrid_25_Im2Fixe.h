/*Header-MicMac-eLiSe-25/06/2007

    MicMac : Multi Image Correspondances par Methodes Automatiques de Correlation
    eLiSe  : ELements of an Image Software Environnement

    www.micmac.ign.fr

   
    Copyright : Institut Geographique National
    Author : Marc Pierrot Deseilligny
    Contributors : Gregoire Maillet, Didier Boldo.

[1] M. Pierrot-Deseilligny, N. Paparoditis.
    "A multiresolution and optimization-based image matching approach:
    An application to surface reconstruction from SPOT5-HRS stereo imagery."
    In IAPRS vol XXXVI-1/W41 in ISPRS Workshop On Topographic Mapping From Space
    (With Special Emphasis on Small Satellites), Ankara, Turquie, 02-2006.

[2] M. Pierrot-Deseilligny, "MicMac, un lociel de mise en correspondance
    d'images, adapte au contexte geograhique" to appears in 
    Bulletin d'information de l'Institut Geographique National, 2007.

Francais :

   MicMac est un logiciel de mise en correspondance d'image adapte 
   au contexte de recherche en information geographique. Il s'appuie sur
   la bibliotheque de manipulation d'image eLiSe. Il est distibue sous la
   licences Cecill-B.  Voir en bas de fichier et  http://www.cecill.info.


English :

    MicMac is an open source software specialized in image matching
    for research in geographic information. MicMac is built on the
    eLiSe image library. MicMac is governed by the  "Cecill-B licence".
    See below and http://www.cecill.info.

Header-MicMac-eLiSe-25/06/2007*/
// File Automatically generated by eLiSe

#include "general/all.h"
#include "private/all.h"


class cEqCorrelGrid_25_Im2Fixe: public cElCompiledFonc
{
   public :

      cEqCorrelGrid_25_Im2Fixe();
      void ComputeVal();
      void ComputeValDeriv();
      void ComputeValDerivHessian();
      double * AdrVarLocFromString(const std::string &);
      void SetDGr2Dz0(double);
      void SetDGr2Dz1(double);
      void SetDGr2Dz10(double);
      void SetDGr2Dz11(double);
      void SetDGr2Dz12(double);
      void SetDGr2Dz13(double);
      void SetDGr2Dz14(double);
      void SetDGr2Dz15(double);
      void SetDGr2Dz16(double);
      void SetDGr2Dz17(double);
      void SetDGr2Dz18(double);
      void SetDGr2Dz19(double);
      void SetDGr2Dz2(double);
      void SetDGr2Dz20(double);
      void SetDGr2Dz21(double);
      void SetDGr2Dz22(double);
      void SetDGr2Dz23(double);
      void SetDGr2Dz24(double);
      void SetDGr2Dz3(double);
      void SetDGr2Dz4(double);
      void SetDGr2Dz5(double);
      void SetDGr2Dz6(double);
      void SetDGr2Dz7(double);
      void SetDGr2Dz8(double);
      void SetDGr2Dz9(double);
      void SetGr1_0(double);
      void SetGr1_1(double);
      void SetGr1_10(double);
      void SetGr1_11(double);
      void SetGr1_12(double);
      void SetGr1_13(double);
      void SetGr1_14(double);
      void SetGr1_15(double);
      void SetGr1_16(double);
      void SetGr1_17(double);
      void SetGr1_18(double);
      void SetGr1_19(double);
      void SetGr1_2(double);
      void SetGr1_20(double);
      void SetGr1_21(double);
      void SetGr1_22(double);
      void SetGr1_23(double);
      void SetGr1_24(double);
      void SetGr1_3(double);
      void SetGr1_4(double);
      void SetGr1_5(double);
      void SetGr1_6(double);
      void SetGr1_7(double);
      void SetGr1_8(double);
      void SetGr1_9(double);
      void SetGr2of0_0(double);
      void SetGr2of0_1(double);
      void SetGr2of0_10(double);
      void SetGr2of0_11(double);
      void SetGr2of0_12(double);
      void SetGr2of0_13(double);
      void SetGr2of0_14(double);
      void SetGr2of0_15(double);
      void SetGr2of0_16(double);
      void SetGr2of0_17(double);
      void SetGr2of0_18(double);
      void SetGr2of0_19(double);
      void SetGr2of0_2(double);
      void SetGr2of0_20(double);
      void SetGr2of0_21(double);
      void SetGr2of0_22(double);
      void SetGr2of0_23(double);
      void SetGr2of0_24(double);
      void SetGr2of0_3(double);
      void SetGr2of0_4(double);
      void SetGr2of0_5(double);
      void SetGr2of0_6(double);
      void SetGr2of0_7(double);
      void SetGr2of0_8(double);
      void SetGr2of0_9(double);
      void SetZCur0(double);
      void SetZCur1(double);
      void SetZCur10(double);
      void SetZCur11(double);
      void SetZCur12(double);
      void SetZCur13(double);
      void SetZCur14(double);
      void SetZCur15(double);
      void SetZCur16(double);
      void SetZCur17(double);
      void SetZCur18(double);
      void SetZCur19(double);
      void SetZCur2(double);
      void SetZCur20(double);
      void SetZCur21(double);
      void SetZCur22(double);
      void SetZCur23(double);
      void SetZCur24(double);
      void SetZCur3(double);
      void SetZCur4(double);
      void SetZCur5(double);
      void SetZCur6(double);
      void SetZCur7(double);
      void SetZCur8(double);
      void SetZCur9(double);


      static cAutoAddEntry  mTheAuto;
      static cElCompiledFonc *  Alloc();
   private :

      double mLocDGr2Dz0;
      double mLocDGr2Dz1;
      double mLocDGr2Dz10;
      double mLocDGr2Dz11;
      double mLocDGr2Dz12;
      double mLocDGr2Dz13;
      double mLocDGr2Dz14;
      double mLocDGr2Dz15;
      double mLocDGr2Dz16;
      double mLocDGr2Dz17;
      double mLocDGr2Dz18;
      double mLocDGr2Dz19;
      double mLocDGr2Dz2;
      double mLocDGr2Dz20;
      double mLocDGr2Dz21;
      double mLocDGr2Dz22;
      double mLocDGr2Dz23;
      double mLocDGr2Dz24;
      double mLocDGr2Dz3;
      double mLocDGr2Dz4;
      double mLocDGr2Dz5;
      double mLocDGr2Dz6;
      double mLocDGr2Dz7;
      double mLocDGr2Dz8;
      double mLocDGr2Dz9;
      double mLocGr1_0;
      double mLocGr1_1;
      double mLocGr1_10;
      double mLocGr1_11;
      double mLocGr1_12;
      double mLocGr1_13;
      double mLocGr1_14;
      double mLocGr1_15;
      double mLocGr1_16;
      double mLocGr1_17;
      double mLocGr1_18;
      double mLocGr1_19;
      double mLocGr1_2;
      double mLocGr1_20;
      double mLocGr1_21;
      double mLocGr1_22;
      double mLocGr1_23;
      double mLocGr1_24;
      double mLocGr1_3;
      double mLocGr1_4;
      double mLocGr1_5;
      double mLocGr1_6;
      double mLocGr1_7;
      double mLocGr1_8;
      double mLocGr1_9;
      double mLocGr2of0_0;
      double mLocGr2of0_1;
      double mLocGr2of0_10;
      double mLocGr2of0_11;
      double mLocGr2of0_12;
      double mLocGr2of0_13;
      double mLocGr2of0_14;
      double mLocGr2of0_15;
      double mLocGr2of0_16;
      double mLocGr2of0_17;
      double mLocGr2of0_18;
      double mLocGr2of0_19;
      double mLocGr2of0_2;
      double mLocGr2of0_20;
      double mLocGr2of0_21;
      double mLocGr2of0_22;
      double mLocGr2of0_23;
      double mLocGr2of0_24;
      double mLocGr2of0_3;
      double mLocGr2of0_4;
      double mLocGr2of0_5;
      double mLocGr2of0_6;
      double mLocGr2of0_7;
      double mLocGr2of0_8;
      double mLocGr2of0_9;
      double mLocZCur0;
      double mLocZCur1;
      double mLocZCur10;
      double mLocZCur11;
      double mLocZCur12;
      double mLocZCur13;
      double mLocZCur14;
      double mLocZCur15;
      double mLocZCur16;
      double mLocZCur17;
      double mLocZCur18;
      double mLocZCur19;
      double mLocZCur2;
      double mLocZCur20;
      double mLocZCur21;
      double mLocZCur22;
      double mLocZCur23;
      double mLocZCur24;
      double mLocZCur3;
      double mLocZCur4;
      double mLocZCur5;
      double mLocZCur6;
      double mLocZCur7;
      double mLocZCur8;
      double mLocZCur9;
};

/*Footer-MicMac-eLiSe-25/06/2007

Ce logiciel est un programme informatique servant à la mise en
correspondances d'images pour la reconstruction du relief.

Ce logiciel est régi par la licence CeCILL-B soumise au droit français et
respectant les principes de diffusion des logiciels libres. Vous pouvez
utiliser, modifier et/ou redistribuer ce programme sous les conditions
de la licence CeCILL-B telle que diffusée par le CEA, le CNRS et l'INRIA 
sur le site "http://www.cecill.info".

En contrepartie de l'accessibilité au code source et des droits de copie,
de modification et de redistribution accordés par cette licence, il n'est
offert aux utilisateurs qu'une garantie limitée.  Pour les mêmes raisons,
seule une responsabilité restreinte pèse sur l'auteur du programme,  le
titulaire des droits patrimoniaux et les concédants successifs.

A cet égard  l'attention de l'utilisateur est attirée sur les risques
associés au chargement,  à l'utilisation,  à la modification et/ou au
développement et à la reproduction du logiciel par l'utilisateur étant 
donné sa spécificité de logiciel libre, qui peut le rendre complexe à 
manipuler et qui le réserve donc à des développeurs et des professionnels
avertis possédant  des  connaissances  informatiques approfondies.  Les
utilisateurs sont donc invités à charger  et  tester  l'adéquation  du
logiciel à leurs besoins dans des conditions permettant d'assurer la
sécurité de leurs systèmes et ou de leurs données et, plus généralement, 
à l'utiliser et l'exploiter dans les mêmes conditions de sécurité. 

Le fait que vous puissiez accéder à cet en-tête signifie que vous avez 
pris connaissance de la licence CeCILL-B, et que vous en avez accepté les
termes.
Footer-MicMac-eLiSe-25/06/2007*/