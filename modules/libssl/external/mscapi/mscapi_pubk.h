/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-
**
** Copyright (C) 2000-2008 Opera Software AS.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
**
** Yngve Pettersen
**
*/

#ifndef _MSCAPI_PUBKEY_H
#define _MSCAPI_PUBKEY_H

#if defined _NATIVE_SSL_SUPPORT_ && defined _SSL_USE_MSCAPI_

#include "mscapi_man.h"

class MSCAPI_PublicKeyCipher : public SSL_PublicKeyCipher
{ 
private:
	HCRYPTPROV	provider;

    BOOL use_privatekey;
    SSL_BulkCipherType ciphertype;
	uint16 key_bits;
    
private:
    MSCAPI_PublicKeyCipher &operator =(const MSCAPI_PublicKeyCipher  &); //not implemented. defined to avoid default
    MSCAPI_PublicKeyCipher(const MSCAPI_PublicKeyCipher  &);  //not implemented. defined to avoid default
    
public:
    MSCAPI_PublicKeyCipher(HCRYPTPROV prov);
    MSCAPI_PublicKeyCipher(const MSCAPI_PublicKeyCipher *);
    
    virtual ~MSCAPI_PublicKeyCipher();
    virtual SSL_CipherType Type() const; 
    virtual SSL_BulkCipherType CipherID() const;
	SSL_BulkCipherType GetCipherType() const;
    virtual void SetUsePrivate(BOOL);
    virtual BOOL UsingPrivate() const;

    virtual void Login(SSL_secure_varvector32 &password);
	virtual BOOL Need_Login();
	virtual BOOL Need_PIN();

    virtual uint16 InputBlockSize() const;
    virtual uint16 OutputBlockSize() const;
    virtual void InitEncrypt();
    virtual byte *Encrypt(const byte *source,uint32 len,byte *target, uint32 &,uint32 bufferlen);
    virtual byte *FinishEncrypt(byte *target, uint32 &,uint32 bufferlen);
    virtual void InitDecrypt();
    virtual byte *Decrypt(const byte *source,uint32 len,byte *target, uint32 &,uint32 bufferlen); 
    virtual byte *FinishDecrypt(byte *target, uint32 &,uint32 bufferlen);
    virtual BOOL Verify(const byte *reference,uint32 len, const byte *signature, uint32); 
	
    virtual uint32 KeyBitsLength() const;   
	
    virtual void LoadPublicKey(uint16, const SSL_varvector16 &);
    virtual uint16 PublicCount() const;   
    virtual uint16 GeneratedPublicCount() const;   
    virtual uint16 PublicSize(uint16) const;   
    virtual uint16 PrivateCount() const;   
    virtual uint16 GeneratedPrivateCount() const;   
    virtual uint16 PrivateSize(uint16) const;
    
    virtual void LoadPrivateKey(uint16, const SSL_varvector16 &);
    virtual void UnLoadPublicKey(uint16, SSL_varvector16 &);
    virtual void UnLoadPrivateKey(uint16, SSL_varvector16 &); 
    virtual byte *Sign(const byte *source,uint32 len,byte *target, uint32 &, uint32 bufferlen);
#if 0 && (defined(USE_SSL_ASN1_SIGNING))
    virtual byte *SignASN1(SSL_Hash *reference, byte *target, uint32 &, uint32 bufferlen);
    virtual BOOL VerifyASN1(SSL_Hash *reference, const byte *signature, uint32); 
#endif
#ifdef SSL_DH_SUPPORT 
    virtual void ProduceGeneratedPublicKeys();
    virtual void ProduceGeneratedPrivateKeys();
#endif
    virtual SSL_PublicKeyCipher *Produce() const;
    virtual SSL_PublicKeyCipher *Fork()const ;
    
    virtual void LoadAllKeys(SSL_varvector32 &);    // Vector with a DER-encoded Private key
	/** Return TRUE if ERROR */
    BOOL CheckError(int status); 
    BOOL Error(SSL_Alert *msg=NULL) const;

};
#endif /* PUBKEY_H */
#endif
