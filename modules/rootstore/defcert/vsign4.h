/* 
   Class 4 PCA

   VERISIGN, INC. LICENSE AGREEMENT

  IMPORTANT - READ CAREFULLY BEFORE DOWNLOADING OR INSTALLING

  This file lists the VeriSign, Inc. ("VeriSign") Class 4 Certification
  Authority Distinguished Name and Public Key information (the "Information").
  BY DOWNLOADING OR INSTALLING THE INFORMATION, YOU INDICATE YOUR ACCEPTANCE
  OF THIS LICENSE.  IF YOU DO NOT AGREE TO ALL OF THE TERMS OF THIS LICENSE,
  DO NOT DOWNLOAD OR USE THE INFORMATION.

  1.   License and Limitations.  VeriSign grants you a royalty-free license to
  use, copy and distribute the Information or any compiled derivative of it,
  subject to the terms of this License.  You must reproduce and include this
  entire License and VeriSign's copyright notices and trademarks on each copy
  of the Information and compiled derivative of it.  VeriSign retains all
  ownership of the Information and all intellectual property rights therein.

  2.   No Warranty.  VeriSign provides the Information "AS IS" and makes no
  warranties, expressed or implied, about the Information or the use thereof.
  WITHOUT LIMITATION, VERISIGN DISCLAIMS ANY IMPLIED WARRANTIES OF
  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NON-INFRINGEMENT OF
  THIRD PARTY RIGHTS.

  3.   Limitation of Liability.  VeriSign's entire liability to you under this
  License shall be limited to a maximum of $10.00.  IN NO EVENT SHALL VERISIGN
  BE LIABLE TO YOU OR TO ANY OTHER PERSON FOR ANY SPECIAL, INCIDENTAL OR
  CONSEQUENTIAL DAMAGES ARISING OUT OF THE USE OR INABILITY TO USE THE
  INFORMATION.

  4.   General.  This License is governed by the laws of the State of California
  and is the complete and exclusive statement of your agreement with VeriSign
  with respect to the Information.  You acknowledge that the Information is
  being provided to you without charge and that this is reflected in the
  absence of warranties and limitations of liability in this License.

  5.   NOTICE: THE USE OF THIS VERISIGN CERTIFICATE IS SUBJECT TO THE
  VERISIGN CERTIFICATION PRACTICE STATEMENT LOCATED AT
       http://www.verisign.com/repository/CPS 
  OR AVAILABLE FROM:
     VeriSign, Inc.
     2593 Coast Ave.
     Mountain View, CA 94043
     (415) 961-7500

  Code Fragments and ASN.1 discussion are taken from the PKCS standards
  published by RSA Data Security, Inc.
  
  Copyright 1995 VeriSign, Inc. All Rights Reserved.
*/


/* VeriSign Class 4 Root Self-Signed Certificate

   See PKCS#6 Appendix A for a description of X.509 certificate abstract syntax
   and signing procedures. 
 
   The certificate encoded below has identical subject and issuer names

   Subject: Country = US,
            Organization = VeriSign, Inc.,
            Organizational Unit = Class 4 Public Primary Certification Authority
   Issuer:  Country = US,
            Organization = VeriSign, Inc.,
            Organizational Unit = Class 4 Public Primary Certification Authority

   A certificate object may be initialized using the following code fragment:

   certItem4.data = CLASS4_ROOT_SELF_SIGNED_CERT;
   certItem4.len = sizeof (CLASS4_ROOT_SELF_SIGNED_CERT);
    
   if ((status = SetCertBER
        (class4CertObject, &certItem4, (ERROR_CTX *)NULL_PTR)) != 0)
     break;
 */

unsigned char CLASS4_ROOT_SELF_SIGNED_CERT[566] = { /* ARRAY OK 2004-02-04 yngve */
 0x30, 0x82, 0x02, 0x31, 0x30, 0x82, 0x01, 0x9a, 0x02, 0x05, 0x02, 0xa6, 0x00, 0x00, 0x01, 0x30,
 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x02, 0x05, 0x00, 0x30, 0x5f,
 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x55, 0x53, 0x31, 0x17, 0x30,
 0x15, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x13, 0x0e, 0x56, 0x65, 0x72, 0x69, 0x53, 0x69, 0x67, 0x6e,
 0x2c, 0x20, 0x49, 0x6e, 0x63, 0x2e, 0x31, 0x37, 0x30, 0x35, 0x06, 0x03, 0x55, 0x04, 0x0b, 0x13,
 0x2e, 0x43, 0x6c, 0x61, 0x73, 0x73, 0x20, 0x34, 0x20, 0x50, 0x75, 0x62, 0x6c, 0x69, 0x63, 0x20,
 0x50, 0x72, 0x69, 0x6d, 0x61, 0x72, 0x79, 0x20, 0x43, 0x65, 0x72, 0x74, 0x69, 0x66, 0x69, 0x63,
 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x41, 0x75, 0x74, 0x68, 0x6f, 0x72, 0x69, 0x74, 0x79, 0x30,
 0x1e, 0x17, 0x0d, 0x39, 0x36, 0x30, 0x31, 0x32, 0x39, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x5a,
 0x17, 0x0d, 0x39, 0x39, 0x31, 0x32, 0x33, 0x31, 0x32, 0x33, 0x35, 0x39, 0x35, 0x39, 0x5a, 0x30,
 0x5f, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x55, 0x53, 0x31, 0x17,
 0x30, 0x15, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x13, 0x0e, 0x56, 0x65, 0x72, 0x69, 0x53, 0x69, 0x67,
 0x6e, 0x2c, 0x20, 0x49, 0x6e, 0x63, 0x2e, 0x31, 0x37, 0x30, 0x35, 0x06, 0x03, 0x55, 0x04, 0x0b,
 0x13, 0x2e, 0x43, 0x6c, 0x61, 0x73, 0x73, 0x20, 0x34, 0x20, 0x50, 0x75, 0x62, 0x6c, 0x69, 0x63,
 0x20, 0x50, 0x72, 0x69, 0x6d, 0x61, 0x72, 0x79, 0x20, 0x43, 0x65, 0x72, 0x74, 0x69, 0x66, 0x69,
 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x41, 0x75, 0x74, 0x68, 0x6f, 0x72, 0x69, 0x74, 0x79,
 0x30, 0x81, 0x9f, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x01,
 0x05, 0x00, 0x03, 0x81, 0x8d, 0x00, 0x30, 0x81, 0x89, 0x02, 0x81, 0x81, 0x00, 0xd0, 0xb2, 0x75,
 0xf6, 0x78, 0xd0, 0xae, 0x5a, 0x50, 0xf4, 0xe9, 0x50, 0xa9, 0x9f, 0x8c, 0xd7, 0xef, 0x91, 0x94,
 0x70, 0xe8, 0xd2, 0x24, 0x90, 0x76, 0x89, 0x85, 0xd6, 0xdf, 0xac, 0xe6, 0x01, 0x17, 0x32, 0x80,
 0xf0, 0x9d, 0x93, 0x47, 0xbc, 0x9a, 0x65, 0x9d, 0x1f, 0x97, 0xae, 0xbf, 0xe9, 0x86, 0x75, 0x63,
 0x20, 0x89, 0xbd, 0x80, 0x58, 0x9d, 0x04, 0x0c, 0x9d, 0xa8, 0xc1, 0x24, 0xe9, 0x0b, 0xe5, 0x31,
 0x78, 0xbd, 0xfc, 0x2d, 0x0c, 0x37, 0x6a, 0x9e, 0x78, 0x80, 0xe9, 0x46, 0x75, 0xf9, 0xed, 0xa3,
 0xfb, 0x13, 0x7b, 0xc8, 0xc1, 0x4c, 0xd2, 0xa3, 0xef, 0xf5, 0x3c, 0xb0, 0x62, 0x8f, 0x4a, 0x5d,
 0x3b, 0xdd, 0x95, 0x67, 0x8f, 0x13, 0xb9, 0xc1, 0x3c, 0xd6, 0xa7, 0x26, 0x9b, 0xec, 0xc3, 0x3b,
 0x7a, 0xd9, 0x4d, 0xbc, 0x6d, 0x9b, 0xe8, 0x15, 0x01, 0xe3, 0xf0, 0x47, 0xa9, 0x02, 0x03, 0x01,
 0x00, 0x01, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x02, 0x05,
 0x00, 0x03, 0x81, 0x81, 0x00, 0x53, 0xdd, 0xd3, 0xf0, 0x9c, 0x24, 0x7e, 0x40, 0xaa, 0xe2, 0xfc,
 0x00, 0x1a, 0xd7, 0xda, 0x0c, 0xfc, 0x32, 0x61, 0xb8, 0x15, 0x0d, 0x96, 0xf3, 0xfa, 0x57, 0x1b,
 0x7f, 0x33, 0x7c, 0xaf, 0xe9, 0x98, 0x9a, 0x61, 0xc8, 0x7a, 0xb3, 0xb7, 0xff, 0xb1, 0xdc, 0x99,
 0x83, 0xdc, 0xac, 0x12, 0xfc, 0x70, 0xc9, 0x1f, 0x38, 0x42, 0xed, 0x44, 0xf6, 0x80, 0x2e, 0x5b,
 0x6b, 0x33, 0x69, 0xac, 0x9c, 0xd3, 0x5c, 0xe7, 0x5f, 0x5a, 0x18, 0xc7, 0xb1, 0x2d, 0x79, 0x04,
 0x96, 0x41, 0x91, 0x99, 0x41, 0xb1, 0x3c, 0x0d, 0xba, 0x84, 0x39, 0xc6, 0x3b, 0x97, 0xf0, 0x26,
 0xc9, 0x8e, 0xee, 0xbd, 0xcc, 0x42, 0x95, 0xff, 0x1e, 0xc7, 0x02, 0x3f, 0x54, 0x0c, 0x78, 0xf5,
 0xbc, 0xaa, 0x60, 0x7c, 0x02, 0x69, 0xe8, 0xdc, 0xac, 0xe2, 0x02, 0x76, 0x61, 0xc4, 0x3e, 0x03,
 0xea, 0xd2, 0x8a, 0x24, 0xd1, 0x00
};


#ifndef VERISIGN_LICENSE
#define VERISIGN_LICENSE
static char __license4[] = "NOTICE: THE USE OF THIS VERISIGN CERTIFICATE IS \
SUBJECT TO THE VERISIGN CERTIFICATION PRACTICE STATEMENT LOCATED AT \
http://www.verisign.com/repository/CPS OR AVAILABLE FROM: VeriSign, Inc.\
2593 Coast Ave.; Mountain View, CA 94043; (415) 961-7500.";
#endif
