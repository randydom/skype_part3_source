
#include "Expand_IV.h"


u32 Expand_IVa (u32 * const key, u32 iv)
{
	u32			k = iv & 15;
	
	if (k == 4)
	{
		Process_IV1();
		Process_IV2();
		Recurse_IV1 (key, key[2]);
	}
	if (k == 8)
	{
		Process_IV3n (0x767255F0);
		Process_IV4();
		Recurse_IV2 (key, iv);
	}
	key[12] -= 28 * key[19];
	if (k == 1)
	{
		Process_IV5();
		Process_IV2();
		Recurse_IV3 (key, key[16]);
	}
	if (k == 6)
	{
		Process_IV6();
		Process_IV7n (0x258A329D);
		Recurse_IV4 (key, key[16]);
	}
	if (k == 14)
	{
		Process_IV8();
		Process_IV9();
		Recurse_IV5 (key, iv);
	}
	key[15] ^= 45 * key[9];
	if (!k)
	{
		Process_IV10();
		Process_IV11();
		Recurse_IV6 (key, key[12]);
	}
	if (k == 9)
	{
		Process_IV12();
		Process_IV13();
		Recurse_IV7 (key, key[19]);
	}
	key[18] ^= 0x327BAFFB * key[2];
	if (k == 7)
	{
		Process_IV2();
		Process_IV14();
		Recurse_IV8 (key, key[8]);
	}
	if (k == 13)
	{
		Process_IV15();
		Process_IV16n (0xA1C70157);
		Recurse_IV9 (key, iv);
	}
	if (k == 3)
	{
		Process_IV3n (0x5947B4C0);
		Process_IV17();
		Recurse_IV10 (key, key[12]);
	}
	key[13] *= u32root (iv);
	if (k == 15)
	{
		Process_IV18n (0x59BBBCF2);
		Process_IV19();
		Recurse_IV11 (key, key[8]);
	}
	if (k == 2)
	{
		Process_IV20n (0x78816EA0);
		Process_IV21();
		Recurse_IV12 (key, key[3]);
	}
	iv &= key[19] ^ 0x22BD05B7;
	if (!k)
	{
		Process_IV22();
		Process_IV23();
		Recurse_IV1 (key, iv);
	}
	if (k == 6)
	{
		Process_IV24();
		Process_IV25();
		Recurse_IV2 (key, key[6]);
	}
	if (k == 3)
	{
		Process_IV26();
		Process_IV27();
		Recurse_IV3 (key, key[0]);
	}
	key[1] ^= key[15] & 0x1ED68333;
	if (k == 11)
	{
		Process_IV28();
		Process_IV29n (0x8FD14B43);
		Recurse_IV4 (key, iv);
	}
	if (k == 7)
	{
		Process_IV30n (0x173A48D4);
		Process_IV1 ();
		Recurse_IV5 (key, key[6]);
	}
	if (k == 9)
	{
		Process_IV31();
		Process_IV32();
		Recurse_IV6 (key, iv);
	}
	key[12] ^= iv - 0x7F670F2F;
	if (k == 12)
	{
		Process_IV2();
		Process_IV19();
		Recurse_IV7 (key, iv);
	}
	if (k == 10)
	{
		Process_IV32();
		Process_IV33n (0x322C4F33);
		Recurse_IV8 (key, key[4]);
	}
	key[3] = rotr32 (key[3], key[10]*4);
	if (k == 5)
	{
		Process_IV34();
		Process_IV35();
		Recurse_IV9 (key, key[4]);
	}
	if (k == 10)
	{
		Process_IV7n (0x224B5A8A);
		Process_IV36n (0xC228AD40);
		Recurse_IV10 (key, key[5]);
	}
	if (k == 8)
	{
		Process_IV29n (0x7B403A3E);
		Process_IV7n (0x2606748C);
		Recurse_IV11 (key, iv);
	}
	iv *= (0x72E979C7 ^ key[7]);
	if (k == 1)
	{
		Process_IV7n (0x3F541FC9);
		Process_IV13();
		Recurse_IV12 (key, key[6]);
	}
	if (k == 4)
	{
		Process_IV20n (0xA3795710);
		Process_IV1();
		Recurse_IV1 (key, key[13]);
	}
	key[15] ^= u32root (key[15]);
	if (k == 5)
	{
		Process_IV37();
		Process_IV27();
		Recurse_IV2 (key, key[1]);
	}
	if (k == 2)
	{
		Process_IV23();
		Process_IV37();
		Recurse_IV3 (key, key[17]);
	}
	key[9] -= rotl32 (key[18], 15);
	return 0;
}


////////////////////////////////////////


u32 Expand_IV1 (u32 * const key, u32 iv)
{
	u32			k = (key[13] ^ key[12] ^ key[8]) % 14;
	
	if (!k)
	{
		Process_IV38();
		Process_IV4();
		Recurse_IV13 (key, key[10]);
	}
	key[10] *= 87 * key[9];
	if (k == 13)
	{
		Process_IV39n (0x2F378459);
		Process_IV8();
		Recurse_IV14 (key, key[15]);
	}
	if (k == 11)
	{
		Process_IV40();
		Process_IV41();
		Recurse_IV15 (key, key[7]);
	}
	iv *= key[13] - 0x1B6664FC;
	if (k == 10)
	{
		Process_IV42();
		Process_IV1();
		Recurse_IV16 (key, key[7]);
	}
	key[19] = rotr32 (key[19], u32root (key[18]));
	if (k == 4)
	{
		Process_IV39n (0x55CE2E77);
		Process_IV43();
		Recurse_IV17 (key, iv);
	}
	if (k == 2)
	{
		Process_IV44();
		Process_IV3n (0xEEDD2781);
		Recurse_IV18 (key, key[19]);
	}
	key[17] += u32root (key[3]);
	if (k == 12)
	{
		Process_IV8();
		Process_IV45();
		Recurse_IV19 (key, key[4]);
	}
	key[2] *= iv + 0x3D4CFA4F;
	if (k == 9)
	{
		Process_IV46();
		Process_IV19();
		Recurse_IV20 (key, iv);
	}
	if (k == 1)
	{
		Process_IV33n (0x1FA79443);
		Process_IV47n (0x13951A5E);
		Recurse_IV21 (key, key[6]);
	}
	key[12] *= 79 * key[6];
	if (k == 6)
	{
		Process_IV11();
		Process_IV3n (0x6F001987);
		Recurse_IV22 (key, key[17]);
	}
	key[3] &= u32sin(key[17]) ? 0x4C35C59A : iv;
	if (k == 3)
	{
		Process_IV48();
		Process_IV14();
		Recurse_IV23 (key, key[11]);
	}
	if (k == 5)
	{
		Process_IV47n (0xE2AEC47F);
		Process_IV35();
		Recurse_IV24 (key, iv);
	}
	key[10] = rotl32 (key[10], 25 * key[16]);
	if (!k)
	{
		Process_IV28();
		Process_IV4();
		Recurse_IV13 (key, iv);
	}
	key[15] += 0xC7308059 - key[10];
	if (k == 8)
	{
		Process_IV49n (0x36292555);
		Process_IV37();
		Recurse_IV14 (key, iv);
	}
	if (k == 7)
	{
		Process_IV46();
		Process_IV50();
		Recurse_IV15 (key, key[12]);
	}
	key[1] ^= iv & 0xF42F3BCF;
	return iv;
}


////////////////////////////////////////


u32 Expand_IV2 (u32 * const key, u32 iv)
{
	u32			k = key[4] % 15;
	
	if (k == 5)
	{
		Process_IV45();
		Process_IV32();
		Recurse_IV14 (key, key[9]);
	}
	key[1] += rotl32 (iv, 4);
	if (k == 9)
	{
		Process_IV51n (0x73F44E37);
		Process_IV3n (0x1A8398B1);
		Recurse_IV15 (key, key[19]);
	}
	key[5] ^= 0x39C770C4 & key[2];
	if (!k)
	{
		Process_IV52n (0xCB398B69);
		Process_IV42();
		Recurse_IV16 (key, key[14]);
	}
	if (k == 1)
	{
		Process_IV34();
		Process_IV17();
		Recurse_IV17 (key, key[7]);
	}
	iv -= rotl32 (iv, 1);
	if (k == 13)
	{
		Process_IV53();
		Process_IV54();
		Recurse_IV18 (key, key[9]);
	}
	if (k == 8)
	{
		Process_IV8();
		Process_IV15();
		Recurse_IV19 (key, key[17]);
	}
	iv += key[17] + 0x25FB77C1;
	if (k == 14)
	{
		Process_IV49n (0x22FE5633);
		Process_IV55();
		Recurse_IV20 (key, key[7]);
	}
	key[4] *= u32cos(key[19]) ? 0x336C9268 : key[4];
	if (k == 11)
	{
		Process_IV8();
		Process_IV6();
		Recurse_IV21 (key, iv);
	}
	key[17] *= u32root (iv);
	if (k == 2)
	{
		Process_IV52n (0x2AA881EB);
		Process_IV56();
		Recurse_IV22 (key, key[12]);
	}
	if (k == 7)
	{
		Process_IV57();
		Process_IV17();
		Recurse_IV23 (key, key[14]);
	}
	key[5] += u32root (key[0]);
	if (k == 4)
	{
		Process_IV32();
		Process_IV27();
		Recurse_IV24 (key, key[13]);
	}
	key[14] ^= rotr32 (key[18], 20);
	if (k == 3)
	{
		Process_IV40();
		Process_IV54();
		Recurse_IV1 (key, key[15]);
	}
	if (!k)
	{
		Process_IV34();
		Process_IV51n (0x64978213);
		Recurse_IV14 (key, key[5]);
	}
	key[10] *= 34 * key[19];
	if (k == 6)
	{
		Process_IV58n (0xA7E8E811);
		Process_IV26();
		Recurse_IV15 (key, iv);
	}
	if (k == 10)
	{
		Process_IV5();
		Process_IV7n (0x27546CBA);
		Recurse_IV16 (key, key[16]);
	}
	iv |= 21 * key[10];
	if (k == 12)
	{
		Process_IV59();
		Process_IV29n (0xE8357BC6);
		Recurse_IV17 (key, key[8]);
	}
	key[17] &= u32sin(iv) ? 0x24D1E601 : key[17];
	return iv;
}


////////////////////////////////////////


u32 Expand_IV3 (u32 * const key, u32 iv)
{
	u32			k = (key[2] ^ key[11] ^ key[19]) & 15;
	
	if (k == 7)
	{
		Process_IV45();
		Process_IV55();
		Recurse_IV15 (key, key[7]);
	}
	iv = rotl32 (iv, 20 * key[15]);
	if (k == 2)
	{
		Process_IV49n (0x51A6A336);
		Process_IV3n (0x855DE620);
		Recurse_IV16 (key, key[2]);
	}
	if (k == 13)
	{
		Process_IV3n (0xC4146E71);
		Process_IV36n (0x193F6CDA);
		Recurse_IV17 (key, iv);
	}
	key[13] += key[18] & 0x2581026D;
	if (k == 11)
	{
		Process_IV27();
		Process_IV37();
		Recurse_IV18 (key, iv);
	}
	key[1] &= iv & 0x64BB010;
	if (k == 5)
	{
		Process_IV60();
		Process_IV23();
		Recurse_IV19 (key, key[13]);
	}
	if (k == 3)
	{
		Process_IV2();
		Process_IV51n (0x42130301);
		Recurse_IV20 (key, iv);
	}
	key[10] |= 67 * key[13];
	if (k == 8)
	{
		Process_IV61n (0xDFDC4A68);
		Process_IV44();
		Recurse_IV21 (key, key[5]);
	}
	key[9] += 0xAA213313 * iv;
	if (!k)
	{
		Process_IV37();
		Process_IV58n (0x16E7FB2A);
		Recurse_IV22 (key, iv);
	}
	if (k == 15)
	{
		Process_IV1();
		Process_IV62n (0x6D43A2A8);
		Recurse_IV23 (key, iv);
	}
	key[14] |= u32root (key[12]);
	if (k == 12)
	{
		Process_IV47n (0xE5FB063D);
		Process_IV42();
		Recurse_IV24 (key, iv);
	}
	if (k == 10)
	{
		Process_IV10();
		Process_IV21();
		Recurse_IV1 (key, key[4]);
	}
	iv = 107 * key[1] ^ iv;
	if (k == 1)
	{
		Process_IV33n (0x4C40E2D);
		Process_IV5();
		Recurse_IV2 (key, key[1]);
	}
	key[9] = rotr32 (key[9], u32sin(key[16]) ? 26 : key[12]);
	if (k == 4)
	{
		Process_IV37();
		Process_IV37();
		Recurse_IV15 (key, key[7]);
	}
	if (!k)
	{
		Process_IV63n (0x60298842);
		Process_IV22();
		Recurse_IV16 (key, iv);
	}
	key[13] *= key[18] ^ 0x1D347B67;
	if (k == 6)
	{
		Process_IV30n (0xAC2CA8C4);
		Process_IV61n (0xFF8CF458);
		Recurse_IV17 (key, key[6]);
	}
	key[2] = u32sin(key[0]) ? key[2] : rotr32 (key[2], key[0]);
	if (k == 14)
	{
		Process_IV21();
		Process_IV29n (0x52041287);
		Recurse_IV18 (key, key[7]);
	}
	if (k == 9)
	{
		Process_IV36n (0xBC894BA0);
		Process_IV64();
		Recurse_IV19 (key, key[3]);
	}
	return 50 * iv * iv;
}


////////////////////////////////////////


u32 Expand_IV4 (u32 * const key, u32 iv)
{
	u32			k = iv & 15;
	
	if (k == 10)
	{
		Process_IV13();
		Process_IV51n (0x1C560B67);
		Recurse_IV16 (key, key[7]);
	}
	key[10] ^= (iv < 0x3D18A13) ? iv : key[9];
	if (k == 6)
	{
		Process_IV11();
		Process_IV17();
		Recurse_IV17 (key, key[17]);
	}
	if (k == 14)
	{
		Process_IV58n (0xA6F86E90);
		Process_IV50();
		Recurse_IV18 (key, key[17]);
	}
	iv -= key[10] & 0x16926664;
	if (!k)
	{
		Process_IV18n (0x95AAFBC8);
		Process_IV12();
		Recurse_IV19 (key, key[7]);
	}
	if (k == 11)
	{
		Process_IV13();
		Process_IV22();
		Recurse_IV20 (key, key[6]);
	}
	key[6] ^= key[7] - 0xD669F4D;
	if (k == 1)
	{
		Process_IV11();
		Process_IV24();
		Recurse_IV21 (key, key[7]);
	}
	key[1] ^= rotr32 (key[15], 14);
	if (k == 5)
	{
		Process_IV21();
		Process_IV65();
		Recurse_IV22 (key, iv);
	}
	if (k == 4)
	{
		Process_IV3n (0x8EEA1FE3);
		Process_IV22();
		Recurse_IV23 (key, key[13]);
	}
	iv = rotr32 (iv, 0x19 & key[5]);
	if (k == 2)
	{
		Process_IV41();
		Process_IV20n (0xFD364750);
		Recurse_IV24 (key, key[9]);
	}
	if (k == 3)
	{
		Process_IV42();
		Process_IV58n (0x104BE7AE);
		Recurse_IV1 (key, key[9]);
	}
	key[3] *= u32root (iv);
	if (!k)
	{
		Process_IV54();
		Process_IV62n (0x507DA30D);
		Recurse_IV2(key, key[2]);
	}
	key[16] -= u32root (iv);
	if (k == 13)
	{
		Process_IV36n (0x19C33A03);
		Process_IV47n (0xD0D9B11D);
		Recurse_IV3 (key, key[4]);
	}
	if (k == 7)
	{
		Process_IV45();
		Process_IV33n (0x3D8D7728);
		Recurse_IV16 (key, key[19]);
	}
	iv += 0x720E12F5 + key[5];
	if (k == 15)
	{
		Process_IV4();
		Process_IV55();
		Recurse_IV17 (key, key[1]);
	}
	if (k == 9)
	{
		Process_IV43();
		Process_IV8();
		Recurse_IV18 (key, key[10]);
	}
	key[1] ^= (iv < 0x585C6D88) ? iv : key[13];
	if (k == 12)
	{
		Process_IV48();
		Process_IV38();
		Recurse_IV19 (key, key[14]);
	}
	if (k == 8)
	{
		Process_IV44();
		Process_IV50();
		Recurse_IV20 (key, key[11]);
	}
	iv |= key[13] + 0x38D39E93;
	if (k == 1)
	{
		Process_IV6();
		Process_IV9();
		Recurse_IV21 (key, key[8]);
	}
	key[19] ^= key[9] + 0x23280350;
	return iv;
}


////////////////////////////////////////


u32 Expand_IV5 (u32 * const key, u32 iv)
{
	u32			k = key[13] & 15;
	
	if (k == 1)
	{
		Process_IV19();
		Process_IV42();
		Recurse_IV17 (key, iv);
	}
	iv += 0xCB72BB0E + key[10];
	if (!k)
	{
		Process_IV54();
		Process_IV32();
		Recurse_IV18 (key, key[0]);
	}
	if (k == 5)
	{
		Process_IV2();
		Process_IV20n (0xB856B2D0);
		Recurse_IV19 (key, key[3]);
	}
	key[7] += 0x72A1B49 - key[6];
	if (k == 1)
	{
		Process_IV26();
		Process_IV65();
		Recurse_IV20 (key, key[15]);
	}
	if (k == 4)
	{
		Process_IV9();
		Process_IV47n (0x391FA13E);
		Recurse_IV21 (key, iv);
	}
	key[17] += u32cos(key[16]) ? 0xD1C5DCA : key[10];
	if (k == 11)
	{
		Process_IV5();
		Process_IV43();
		Recurse_IV22 (key, key[5]);
	}
	if (k == 14)
	{
		Process_IV52n (0x7999A714);
		Process_IV33n (0x2AF3A443);
		Recurse_IV23 (key, key[3]);
	}
	iv += 0xA4631CA4 & key[0];
	if (k == 10)
	{
		Process_IV45();
		Process_IV25();
		Recurse_IV24 (key, key[6]);
	}
	if (k == 3)
	{
		Process_IV55();
		Process_IV59();
		Recurse_IV1 (key, key[11]);
	}
	key[18] = rotl32 (key[18], u32root (key[13]));
	if (k == 2)
	{
		Process_IV29n (0x255DB12E);
		Process_IV63n (0x8570A62A);
		Recurse_IV2 (key, key[19]);
	}
	iv += key[12] & 0x3EB958F;
	if (k == 13)
	{
		Process_IV2();
		Process_IV50();
		Recurse_IV3 (key, key[19]);
	}
	if (k == 2)
	{
		Process_IV12();
		Process_IV30n (0xFD54B81D);
		Recurse_IV4 (key, iv);
	}
	key[10] *= 61 * iv;
	if (k == 15)
	{
		Process_IV65();
		Process_IV43();
		Recurse_IV17 (key, key[9]);
	}
	if (!k)
	{
		Process_IV48();
		Process_IV12();
		Recurse_IV18 (key, key[17]);
	}
	iv = rotl32 (iv, key[16]);
	if (k == 9)
	{
		Process_IV3n (0xD59BE521);
		Process_IV39n (0x59621E0F);
		Recurse_IV19 (key, key[6]);
	}
	if (k == 7)
	{
		Process_IV55();
		Process_IV51n (0x56A3C69F);
		Recurse_IV20 (key, key[4]);
	}
	key[16] -= (key[5] < 0x4DEA623B) ? key[5] : key[2];
	if (k == 8)
	{
		Process_IV20n (0x74905F34);
		Process_IV3n (0x99B3E5F0);
		Recurse_IV21(key, key[10]);
	}
	if (k == 6)
	{
		Process_IV45();
		Process_IV53();
		Recurse_IV22 (key, key[11]);
	}
	key[14] = rotr32 (key[14], u32sin(key[19]) ? 27 : key[5]);
	if (k == 12)
	{
		Process_IV6();
		Process_IV54();
		Recurse_IV23 (key, key[12]);
	}
	return iv * (iv - 0x497488D1);
}


////////////////////////////////////////


u32 Expand_IV6 (u32 * const key, u32 iv)
{
	u32			k = (key[11] ^ key[6] ^ key[4]) & 15;
	
	if (k == 2)
	{
		Process_IV11();
		Process_IV5();
		Recurse_IV18 (key, iv);
	}
	key[10] |= rotr32 (iv, 6);
	if (k == 14)
	{
		Process_IV37();
		Process_IV31();
		Recurse_IV19 (key, key[18]);
	}
	if (k == 9)
	{
		Process_IV43();
		Process_IV58n (0x13BC76D5);
		Recurse_IV20 (key, key[1]);
	}
	iv &= u32sin(key[11]) ? 0xDA03B206 : key[15];
	if (k == 12)
	{
		Process_IV37();
		Process_IV2();
		Recurse_IV21 (key, key[0]);
	}
	if (k == 3)
	{
		Process_IV41();
		Process_IV59();
		Recurse_IV22 (key, iv);
	}
	key[14] ^= 83 * key[14];
	if (k == 7)
	{
		Process_IV41();
		Process_IV59();
		Recurse_IV23 (key, key[12]);
	}
	if (k == 11)
	{
		Process_IV6();
		Process_IV40();
		Recurse_IV24 (key, key[10]);
	}
	key[11] -= u32sin(iv) ? 0xCA758BFB : key[12];
	if (k == 10)
	{
		Process_IV66();
		Process_IV38();
		Recurse_IV1 (key, iv);
	}
	if (k == 8)
	{
		Process_IV26();
		Process_IV67n (0x26B5176D);
		Recurse_IV2 (key, key[14]);
	}
	iv *= 0xACA6EF1E ^ key[1];
	if (k == 13)
	{
		Process_IV44();
		Process_IV24();
		Recurse_IV3 (key, iv);
	}
	if (k == 6)
	{
		Process_IV44();
		Process_IV48();
		Recurse_IV4 (key, key[13]);
	}
	iv += 41 * key[11];
	if (k == 3)
	{
		Process_IV17();
		Process_IV46();
		Recurse_IV5 (key, key[17]);
	}
	if (k == 1)
	{
		Process_IV54();
		Process_IV10();
		Recurse_IV18 (key, iv);
	}
	key[8] += 35 * key[6];
	if (k == 4)
	{
		Process_IV50();
		Process_IV48();
		Recurse_IV19 (key, key[1]);
	}
	if (k == 1)
	{
		Process_IV47n (0x909F);
		Process_IV44();
		Recurse_IV20 (key, key[2]);
	}
	key[11] *= key[12] - 0x48766E9C;
	if (!k)
	{
		Process_IV7n (0x29B6BEC0);
		Process_IV68n (0x5233F757);
		Recurse_IV21 (key, key[9]);
	}
	if (k == 15)
	{
		Process_IV59();
		Process_IV28();
		Recurse_IV22 (key, iv);
	}
	key[3] += u32root (key[15]);
	if (k == 5)
	{
		Process_IV4();
		Process_IV28();
		Recurse_IV23 (key, key[1]);
	}
	key[4] = rotl32 (key[4], u32sin(key[12]) ? 13 : key[14]);
	if (k == 2)
	{
		Process_IV4();
		Process_IV65();
		Recurse_IV24 (key, key[4]);
	}
	if (!k)
	{
		Process_IV40();
		Process_IV21();
		Recurse_IV1 (key, key[5]);
	}
	key[5] &= 97 * key[16];
	return iv;
}


////////////////////////////////////////


u32 Expand_IV7 (u32 * const key, u32 iv)
{
	u32			k = (key[8] ^ key[7] ^ key[16]) & 15;
	
	if (k == 8)
	{
		Process_IV62n (0xCDBFC92);
		Process_IV6();
		Recurse_IV19 (key, key[13]);
	}
	key[3] -= key[15] + 0xFE7A752E;
	if (k == 3)
	{
		Process_IV18n (0xB706A577);
		Process_IV1();
		Recurse_IV20 (key, key[8]);
	}
	if (k == 7)
	{
		Process_IV69();
		Process_IV70();
		Recurse_IV21 (key, iv);
	}
	key[0] ^= 25 * key[14];
	if (k == 2)
	{
		Process_IV49n (0x2E9ACBE2);
		Process_IV54();
		Recurse_IV22 (key, key[6]);
	}
	if (k == 12)
	{
		Process_IV38();
		Process_IV20n (0xF5E5E9F0);
		Recurse_IV23 (key, key[0]);
	}
	key[0] ^= (key[18] < 0xD339212E) ? key[18] : iv;
	if (k == 11)
	{
		Process_IV62n (0x5C1A35DA);
		Process_IV14();
		Recurse_IV24 (key, key[15]);
	}
	if (!k)
	{
		Process_IV39n (0x24FE0880);
		Process_IV3n (0x58FC9D30);
		Recurse_IV1 (key, key[12]);
	}
	key[19] ^= key[2] ^ 0xACF3864;
	if (k == 15)
	{
		Process_IV35();
		Process_IV8();
		Recurse_IV2 (key, iv);
	}
	if (k == 2)
	{
		Process_IV62n (0xAAB1F08);
		Process_IV2();
		Recurse_IV3 (key, iv);
	}
	iv -= (key[7] < 0xF2D2F7) ? key[7] : iv;
	if (k == 10)
	{
		Process_IV25();
		Process_IV34();
		Recurse_IV4 (key, key[3]);
	}
	key[12] = rotr32 (key[12], key[19] + 3);
	if (k == 6)
	{
		Process_IV43();
		Process_IV68n (0x4ADA50AE);
		Recurse_IV5 (key, key[19]);
	}
	if (k == 9)
	{
		Process_IV42();
		Process_IV28();
		Recurse_IV6 (key, key[9]);
	}
	iv ^= key[0] + 0xEC0FD36;
	if (k == 1)
	{
		Process_IV7n (0x2AB43EDB);
		Process_IV28();
		Recurse_IV19 (key, iv);
	}
	if (!k)
	{
		Process_IV61n (0xF7FB2E31);
		Process_IV2();
		Recurse_IV20 (key, key[6]);
	}
	iv += 93 * key[5];
	if (k == 13)
	{
		Process_IV22();
		Process_IV9();
		Recurse_IV21 (key, key[4]);
	}
	if (k == 5)
	{
		Process_IV59();
		Process_IV32();
		Recurse_IV22 (key, key[5]);
	}
	iv &= iv - 0x6718263;
	if (k == 1)
	{
		Process_IV39n (0x30A63C23);
		Process_IV12();
		Recurse_IV23 (key, key[1]);
	}
	if (k == 14)
	{
		Process_IV18n (0x98A2A62E);
		Process_IV1();
		Recurse_IV24 (key, key[18]);
	}
	if (k == 3)
	{
		Process_IV69();
		Process_IV68n (0x87E63075);
		Recurse_IV1 (key, key[14]);
	}
	iv = 0xEC076923 - key[10];
	if (k == 4)
	{
		Process_IV56();
		Process_IV32();
		Recurse_IV2 (key, key[10]);
		Process_IV57();
		Process_IV9();
		Recurse_IV3 (key, key[9]);
	}
	return 0xD271A9AD - key[8] + iv;
}


////////////////////////////////////////


u32 Expand_IV8 (u32 * const key, u32 iv)
{
	u32			k = (key[14] ^ key[1] ^ key[8]) & 15;
	
	if (k == 3)
	{
		Process_IV8();
		Process_IV7n (0x23841ACB);
		Recurse_IV20 (key, key[18]);
	}
	if (!k)
	{
		Process_IV15();
		Process_IV61n (0x1656F2C);
		Recurse_IV21 (key, iv);
	}
	key[18] ^= u32root (key[1]);
	if (k == 8)
	{
		Process_IV52n (0x44354084);
		Process_IV51n (0x8CD68022);
		Recurse_IV22 (key, key[10]);
	}
	if (k == 13)
	{
		Process_IV6();
		Process_IV20n (0x8DA95160);
		Recurse_IV23 (key, key[18]);
	}
	key[2] += rotr32 (key[14], 12);
	if (k == 3)
	{
		Process_IV49n (0x27F1B092);
		Process_IV64();
		Recurse_IV24 (key, iv);
	}
	if (k == 9)
	{
		Process_IV26();
		Process_IV70();
		Recurse_IV1 (key, key[7]);
	}
	if (k == 11)
	{
		Process_IV19();
		Process_IV42();
		Recurse_IV2 (key, key[6]);
	}
	key[18] ^= u32root (key[17]);
	if (k == 10)
	{
		Process_IV31();
		Process_IV35();
		Recurse_IV3(key, iv);
	}
	if (k == 4)
	{
		Process_IV16n (0x41528AC);
		Process_IV56();
		Recurse_IV4(key, iv);
	}
	key[16] += 73 * key[2];
	if (k == 14)
	{
		Process_IV15();
		Process_IV47n (0xA5DCFAFF);
		Recurse_IV5(key, key[10]);
	}
	if (k == 5)
	{
		Process_IV14();
		Process_IV69();
		Recurse_IV6(key, iv);
	}
	iv += rotr32 (iv, 115);
	if (k == 2)
	{
		Process_IV7n (0x504F395C);
		Process_IV61n (0xB6E979A8);
		Recurse_IV7 (key, iv);
		Process_IV41();
		Process_IV13();
		Recurse_IV20 (key, iv);
	}
	key[9] ^= 110 * key[1];
	if (k == 1)
	{
		Process_IV56();
		Process_IV47n (0x6F09E141);
		Recurse_IV21 (key, key[7]);
	}
	if (k == 4)
	{
		Process_IV37();
		Process_IV31();
		Recurse_IV22(key, key[7]);
	}
	if (k == 15)
	{
		Process_IV29n (0xA09F88F1);
		Process_IV59();
		Recurse_IV23(key, key[14]);
	}
	key[16] -= (key[0] < 0x22C8CF2) ? key[0] : key[5];
	if (!k)
	{
		Process_IV57();
		Process_IV45();
		Recurse_IV24(key, key[2]);
	}
	if (k == 5)
	{
		Process_IV53();
		Process_IV14();
		Recurse_IV1(key, key[4]);
	}
	key[9] *= (iv < 0x5FD809D2) ? iv : key[4];
	if (k == 7)
	{
		Process_IV69();
		Process_IV49n (0x3F4D36FD);
		Recurse_IV2(key, key[5]);
	}
	if (k == 1)
	{
		Process_IV12();
		Process_IV51n (0x4A1E433D);
		Recurse_IV3 (key, key[0]);
	}
	iv += iv - 0x5790C685;
	if (k == 12)
	{
		Process_IV13();
		Process_IV58n (0x121738E5);
		Recurse_IV4 (key, iv);
	}
	if (k == 6)
	{
		Process_IV27();
		Process_IV16n (0x60E885A6);
		Recurse_IV5 (key, key[4]);
	}
	key[18] *= 0x5790C685 ^ key[13];
	return iv;
}


////////////////////////////////////////


u32 Expand_IV9 (u32 * const key, u32 iv)
{
	u32			k = (key[18] ^ key[5] ^ key[2]) & 15;
	
	if (k == 10)
	{
		Process_IV36n (0xA7E64E88);
		Process_IV31();
		Recurse_IV21 (key, iv);
	}
	if (k == 6)
	{
		Process_IV28();
		Process_IV24();
		Recurse_IV22(key, key[19]);
	}
	key[5] |= u32root (key[11]);
	if (k == 5)
	{
		Process_IV15();
		Process_IV55();
		Recurse_IV23(key, key[5]);
	}
	if (k == 4)
	{
		Process_IV27();
		Process_IV8();
		Recurse_IV24(key, key[9]);
	}
	key[15] &= 88 * key[12];
	if (!k)
	{
		Process_IV47n (0xF5D726FF);
		Process_IV32();
		Recurse_IV1 (key, key[0]);
	}
	if (k == 7)
	{
		Process_IV56();
		Process_IV62n (0x6C0A34BC);
		Recurse_IV2 (key, key[10]);
	}
	if (k == 4)
	{
		Process_IV54();
		Process_IV38();
		Recurse_IV3 (key, key[2]);
	}
	iv += 0xFDFB78FE * key[11];
	if (k == 5)
	{
		Process_IV40();
		Process_IV34();
		Recurse_IV4 (key, key[17]);
	}
	if (k == 12)
	{
		Process_IV4();
		Process_IV47n (0x4EFAD4C);
		Recurse_IV5 (key, key[9]);
	}
	key[12] += iv - 0x4C7E1193;
	if (k == 3)
	{
		Process_IV62n (0x6FFD6E50);
		Process_IV9();
		Recurse_IV6 (key, key[17]);
	}
	if (k == 2)
	{
		Process_IV59();
		Process_IV13();
		Recurse_IV7 (key, key[15]);
	}
	if (k == 3)
	{
		Process_IV9();
		Process_IV64();
		Recurse_IV8 (key, iv);
	}
	key[16] += u32root (key[2]);
	if (k == 6)
	{
		Process_IV19();
		Process_IV47n (0x28288B07);
		Recurse_IV21 (key, key[15]);
	}
	if (k == 2)
	{
		Process_IV30n (0xA623C3F4);
		Process_IV65();
		Recurse_IV22 (key, key[5]);
	}
	key[0] *= 123 * key[19];
	if (k == 9)
	{
		Process_IV41();
		Process_IV35();
		Recurse_IV23 (key, key[0]);
	}
	if (k == 15)
	{
		Process_IV1();
		Process_IV52n (0xFA9CC3E7);
		Recurse_IV24 (key, iv);
	}
	if (k == 14)
	{
		Process_IV34();
		Process_IV6();
		Recurse_IV1 (key, key[8]);
	}
	key[4] |= 0x89C7C4D3 ^ key[13];
	if (k == 13)
	{
		Process_IV6();
		Process_IV19();
		Recurse_IV2 (key, key[3]);
	}
	if (k == 8)
	{
		Process_IV13();
		Process_IV27();
		Recurse_IV3 (key, key[5]);
	}
	iv -= u32cos(key[14]) ? 0x111DCA68 : key[18];
	if (k == 11)
	{
		Process_IV52n (0xF2AE8A6F);
		Process_IV58n (0xA35F29BB);
		Recurse_IV4 (key, key[3]);
	}
	if (!k)
	{
		Process_IV69();
		Process_IV18n (0x20F609B2);
		Recurse_IV5 (key, key[11]);
	}
	if (k == 1)
	{
		Process_IV42();
		Process_IV34();
		Recurse_IV6 (key, key[4]);
	}
	key[11] *= u32root (iv);
	if (k == 1)
	{
		Process_IV18n (0x8FE3C3F3);
		Process_IV1();
		Recurse_IV7 (key, iv);
	}
	key[16] ^= u32sin(iv) ? 0x16283882 : key[12];
	return iv;
}


////////////////////////////////////////


u32 Expand_IV10 (u32 * const key, u32 iv)
{
	u32			k = key[14] & 15;
	
	if (k == 5)
	{
		Process_IV17();
		Process_IV59();
		Recurse_IV22 (key, iv);
	}
	if (k == 9)
	{
		Process_IV67n (0xBD460637);
		Process_IV67n (0x23D5BA3F);
		Recurse_IV23 (key, key[19]);
	}
	key[19] *= u32root (iv);
	if (k == 10)
	{
		Process_IV55();
		Process_IV36n (0x728998D1);
		Recurse_IV24 (key, key[12]);
	}
	if (k == 11)
	{
		Process_IV65();
		Process_IV52n (0x30BFC03B);
		Recurse_IV1 (key, iv);
	}
	key[12] ^= u32cos(key[11]) ? 0x1594E0E0 : key[7];
	if (k == 15)
	{
		Process_IV57();
		Process_IV23();
		Recurse_IV2 (key, iv);
	}
	if (k == 4)
	{
		Process_IV29n (0x7D76C942);
		Process_IV53();
		Recurse_IV3 (key, iv);
	}
	key[18] &= rotr32 (key[17], 29);
	if (k == 12)
	{
		Process_IV24();
		Process_IV16n (0xB82B0DAB);
		Recurse_IV4 (key, key[3]);
	}
	if (k == 1)
	{
		Process_IV36n (0x387FD942);
		Process_IV33n (0x3A353E8D);
		Recurse_IV5 (key, key[5]);
	}
	key[1] -= 92 * key[19];
	if (k == 14)
	{
		Process_IV30n (0x752B3066);
		Process_IV2();
		Recurse_IV6 (key, key[0]);
	}
	if (k == 3)
	{
		Process_IV65();
		Process_IV39n (0x2CE8A84E);
		Recurse_IV7 (key, iv);
	}
	key[14] += 0x1579CA5 - iv;
	if (k == 1)
	{
		Process_IV35();
		Process_IV64();
		Recurse_IV8 (key, iv);
	}
	if (k == 6)
	{
		Process_IV20n (0xF77014A1);
		Process_IV66();
		Recurse_IV9 (key, iv);
	}
	key[8] -= 78 * key[1];
	if (k == 13)
	{
		Process_IV20n (0xE11B2300);
		Process_IV47n (0xF6AF31E);
		Recurse_IV22 (key, key[14]);
	}
	if (k == 2)
	{
		Process_IV48();
		Process_IV52n (0x3F2AE8C);
		Recurse_IV23 (key, key[13]);
	}
	key[16] = rotr32 (key[16], key[15] | 30);
	if (!k)
	{
		Process_IV36n (0xA3E0B000);
		Process_IV44();
		Recurse_IV24 (key, key[7]);
		Process_IV49n (0x1985DC2F);
		Process_IV32();
		Recurse_IV1 (key, key[6]);
	}
	key[8] -= 12 * key[18];
	if (k == 4)
	{
		Process_IV69();
		Process_IV70();
		Recurse_IV2 (key, iv);
	}
	if (k == 3)
	{
		Process_IV33n (0x467538B);
		Process_IV40();
		Recurse_IV3 (key, key[1]);
	}
	key[14] ^= u32cos(key[5]) ? 0x579B4B85 : key[6];
	if (k == 2)
	{
		Process_IV64();
		Process_IV57();
		Recurse_IV4 (key, key[10]);
	}
	if (k == 5)
	{
		Process_IV38();
		Process_IV10();
		Recurse_IV5 (key, iv);
	}
	key[10] += 0x3575DC9 * key[13];
	if (k == 7)
	{
		Process_IV50();
		Process_IV16n (0xB8AD3ED9);
		Recurse_IV6 (key, key[16]);
		Process_IV29n (0xC279F292);
		Process_IV48();
		Recurse_IV7 (key, key[16]);
	}
	if (k == 8)
	{
		Process_IV2();
		Process_IV45();
		Recurse_IV8 (key, key[14]);
	}
	key[4] ^= key[5] & 0x136008B9;
	if (k == 6)
	{
		Process_IV66();
		Process_IV10();
		Recurse_IV9 (key, key[4]);
	}
	key[3] ^= 0x29909382 + key[13];
	return iv;
}


////////////////////////////////////////


u32 Expand_IV11 (u32 * const key, u32 iv)
{
	u32			k = key[3] & 15;
	
	if (k == 5)
	{
		Process_IV45();
		Process_IV14();
		Recurse_IV23 (key, key[4]);
	}
	if (k == 7)
	{
		Process_IV20n (0x87675430);
		Process_IV34();
		Recurse_IV24 (key, iv);
	}
	key[4] *= u32sin(iv) ? 0x23D1B75F : key[11];
	if (k == 10)
	{
		Process_IV44();
		Process_IV15();
		Recurse_IV1 (key, iv);
	}
	if (k == 8)
	{
		Process_IV15();
		Process_IV13();
		Recurse_IV2 (key, key[11]);
	}
	iv *= key[13] - 0x21175CB;
	if (k == 4)
	{
		Process_IV63n (0x60AB10C9);
		Process_IV12();
		Recurse_IV3 (key, key[11]);
	}
	if (k == 2)
	{
		Process_IV34();
		Process_IV32();
		Recurse_IV4 (key, key[15]);
		Process_IV21();
		Process_IV1();
		Recurse_IV5 (key, key[8]);
	}
	iv = rotl32 (iv, iv + 5);
	if (k == 4)
	{
		Process_IV67n (0xF2F0F729);
		Process_IV9();
		Recurse_IV6 (key, key[7]);
	}
	if (!k)
	{
		Process_IV59();
		Process_IV52n (0xF0C5A244);
		Recurse_IV7 (key, key[17]);
	}
	key[3] = rotl32 (key[3], (key[8] < 0x354AE538) ? key[8] : iv);
	if (!k)
	{
		Process_IV28();
		Process_IV8();
		Recurse_IV8 (key, key[7]);
	}
	if (k == 11)
	{
		Process_IV61n (0xD083A1C7);
		Process_IV23();
		Recurse_IV9 (key, key[3]);
	}
	key[7] -= key[18] ^ 0xF1CDC7D;
	if (k == 8)
	{
		Process_IV9();
		Process_IV47n (0xC67A38DE);
		Recurse_IV10 (key, key[16]);
	}
	if (k == 1)
	{
		Process_IV14();
		Process_IV34();
		Recurse_IV23 (key, iv);
	}
	if (k == 15)
	{
		Process_IV44();
		Process_IV3n (0xE6E035C2);
		Recurse_IV24 (key, key[3]);
	}
	iv += (key[13] < 0x32081481) ? key[13] : iv;
	if (k == 9)
	{
		Process_IV51n (0x82F8C53B);
		Process_IV30n (0x8494F082);
		Recurse_IV1 (key, key[10]);
	}
	if (k == 3)
	{
		Process_IV24();
		Process_IV20n (0xD5BE6210);
		Recurse_IV2 (key, key[3]);
	}
	key[18] += 0xD3BE6F0E - key[17];
	if (k == 1)
	{
		Process_IV51n (0x71F9452A);
		Process_IV63n (0x91E7D2DC);
		Recurse_IV3 (key, key[13]);
	}
	if (k == 5)
	{
		Process_IV5();
		Process_IV36n (0x1394EC30);
		Recurse_IV4 (key, iv);
	}
	if (k == 6)
	{
		Process_IV19();
		Process_IV4();
		Recurse_IV5 (key, key[7]);
	}
	key[7] -= (iv < 0xD28B93FE) ? iv : key[18];
	if (k == 14)
	{
		Process_IV4();
		Process_IV67n (0xD0D89937);
		Recurse_IV6 (key, iv);
	}
	if (k == 3)
	{
		Process_IV3n (0x91403FF1);
		Process_IV54();
		Recurse_IV7 (key, key[10]);
	}
	key[2] = rotl32 (key[2], -80 * key[17]);
	if (k == 13)
	{
		Process_IV63n (0x313B46D8);
		Process_IV47n (0xD9FEC55F);
		Recurse_IV8 (key, key[10]);
	}
	if (k == 12)
	{
		Process_IV20n (0xA82EAC44);
		Process_IV36n (0x1E4F3498);
		Recurse_IV9 (key, iv);
	}
	key[17] -= key[3] & 0x5C40869;
	if (k == 7)
	{
		Process_IV8();
		Process_IV47n (0xE8B5F17D);
		Recurse_IV10 (key, key[4]);
	}
	if (k == 6)
	{
		Process_IV63n (0x4321C7C4);
		Process_IV2();
		Recurse_IV23 (key, key[7]);
	}
	key[6] += iv - 0xAD58C16C;
	return iv;
}


////////////////////////////////////////


u32 Expand_IV12 (u32 * const key, u32 iv)
{
	u32			k = (key[19] ^ iv ^ key[0]) & 15;
	
	if (k == 2)
	{
		Process_IV32();
		Process_IV38();
		Recurse_IV24 (key, key[6]);
	}
	if (k == 3)
	{
		Process_IV17();
		Process_IV69();
		Recurse_IV1 (key, key[0]);
	}
	iv -= rotr32 (key[7], 74);
	if (k == 8)
	{
		Process_IV27();
		Process_IV39n (0x454B4CB0);
		Recurse_IV2 (key, key[5]);
	}
	if (k == 13)
	{
		Process_IV37();
		Process_IV14();
		Recurse_IV3 (key, key[4]);
	}
	key[5] ^= key[13] - 0x05648E1C;
	if (k == 1)
	{
		Process_IV63n (0x5F7C048F);
		Process_IV4();
		Recurse_IV4 (key, key[5]);
	}
	if (k == 15)
	{
		Process_IV57();
		Process_IV61n (0xDBC32E55);
		Recurse_IV5 (key, iv);
	}
	if (k == 7)
	{
		Process_IV56();
		Process_IV69();
		Recurse_IV6 (key, key[16]);
	}
	key[0] ^= 0xC8350BCD * key[17];
	if (k == 1)
	{
		Process_IV6();
		Process_IV61n (0xF14A0809);
		Recurse_IV7 (key, key[12]);
	}
	if (k == 10)
	{
		Process_IV42();
		Process_IV36n (0xEF4B8C81);
		Recurse_IV8 (key, key[16]);
	}
	if (k == 4)
	{
		Process_IV57();
		Process_IV4();
		Recurse_IV9 (key, key[18]);
	}
	iv &= (0xC8350BCD + key[13]);
	if (k == 5)
	{
		Process_IV16n (0x75B10262);
		Process_IV21();
		Recurse_IV10 (key, key[7]);
	}
	if (k == 6)
	{
		Process_IV56();
		Process_IV1();
		Recurse_IV11 (key, key[2]);
	}
	key[2] = rotr32 (key[2], key[17] & 8);
	if (k == 5)
	{
		Process_IV22();
		Process_IV24();
		Recurse_IV24 (key, iv);
	}
	if (!k)
	{
		Process_IV23();
		Process_IV57();
		Recurse_IV1 (key, key[8]);
	}
	iv = rotr32 (iv, iv - 16);
	if (k == 9)
	{
		Process_IV1();
		Process_IV62n (0x7C854F50);
		Recurse_IV2 (key, key[2]);
	}
	if (k == 3)
	{
		Process_IV38();
		Process_IV25();
		Recurse_IV3 (key, key[16]);
	}
	if (k == 6)
	{
		Process_IV37();
		Process_IV50();
		Recurse_IV4 (key, key[12]);
	}
	key[17] ^= rotl32 (key[3], 5);
	if (k == 4)
	{
		Process_IV37();
		Process_IV54();
		Recurse_IV5 (key, key[19]);
	}
	if (k == 11)
	{
		Process_IV10();
		Process_IV30n (0xBDDD6945);
		Recurse_IV6 (key, iv);
	}
	key[15] += 0x531BF4BD - key[5];
	if (!k)
	{
		Process_IV24();
		Process_IV70();
		Recurse_IV7 (key, iv);
	}
	if (k == 9)
	{
		Process_IV27();
		Process_IV22();
		Recurse_IV8 (key, iv);
	}
	if (k == 14)
	{
		Process_IV21();
		Process_IV8();
		Recurse_IV9 (key, key[7]);
	}
	key[5] &= (key[9] < 0x802D5786) ? key[9] : key[16];
	if (k == 12)
	{
		Process_IV5();
		Process_IV48();
		Recurse_IV10 (key, iv);
	}
	if (k == 7)
	{
		Process_IV62n (0x75382920);
		Process_IV64();
		Recurse_IV11 (key, key[10]);
	}
	key[1] *= 104 * key[12];
	if (k == 8)
	{
		Process_IV24();
		Process_IV3n (0xCCB27D90);
		Recurse_IV24 (key, key[19]);
	}
	if (k == 2)
	{
		Process_IV13();
		Process_IV54();
		Recurse_IV1 (key, key[4]);
	}
	key[17] ^= (iv < 0x136FA01) ? iv : key[18];
	return iv;
}


////////////////////////////////////////


u32 Expand_IV13 (u32 * const key, u32 iv)
{
	u32			k = (iv ^ key[0] ^ key[18]) & 1;
	
	key[11] ^= key[5] | 0x16AE2234;
	key[12] += (key[8] & 0xAE32B8E);
	key[0] -= 12 * key[16];
	key[16] ^= iv + 0xA8BDFE15;
	key[9] -= 0x8181F7E7 + key[10];
	if (!k)
	{
		Process_IV47n (0x24B5D4C1);
		Process_IV69();
		Process_IV71n (iv);
	}
	iv = rotr32 (iv, 30 * key[16]);
	iv ^= rotr32 (key[15], -12);
	key[13] += key[13] ^ 0x486B19AC;
	key[2] |= key[9] + 0x1086C59F;
	key[14] |= u32cos(iv) ? 0x5BADEF93 : key[10];
	if (k == 1)
	{
		Process_IV9();
		Process_IV29n (0xB0DAD1C3);
		Process_IV72n (key[17]);
	}
	key[12] += (key[10] < 0x2EE7C8C3) ? key[10] : iv;
	return iv;
}


////////////////////////////////////////


u32 Expand_IV14 (u32 * const key, u32 iv)
{
	u32			k = (iv ^ key[0] ^ key[16]) % 3;
	
	key[12] += (iv < 0x3FEC317) ? iv : key[12];
	iv = rotr32 (iv, iv - 8);
	key[10] *= key[10] - 0x54940E;
	if (k == 2)
	{
		Process_IV52n (0xE4AAC6EF);
		Process_IV1();
		Process_IV71n (key[19]);
	}
	key[2] = rotr32 (key[2], rotr32 (key[6], 22));
	key[12] = rotr32 (key[12], key[1] - 0x2206F590);
	key[15] = rotl32 (key[15], key[8] ^ 150);
	if (!k)
	{
		Process_IV32();
		Process_IV43();
		Process_IV72n (key[5]);
	}
	iv += u32root (key[9]);
	key[10] -= rotl32 (iv, 0x209B4CB8);
	key[1] += 41 * iv;
	key[9] *= 105 * key[3];
	if (k == 1)
	{
		Process_IV24();
		Process_IV55();
		Recurse_IV13 (key, key[0]);
	}
	iv -= 0xFCCEF753 | key[10];
	return iv;
}


////////////////////////////////////////


u32 Expand_IV15 (u32 * const key, u32 iv)
{
	u32			k = key[16] & 3;
	
	iv += rotl32 (key[10], 4);
	iv = rotr32 (iv, u32cos(key[18]) ? 14 : key[15]);
	if (k == 3)
	{
		Process_IV27();
		Process_IV53();
		Process_IV71n (key[2]);
	}
	iv = rotl32 (iv, rotr32 (key[6], 21));
	key[17] |= key[11] - 0xBF85104;
	key[17] -= 78 * iv;
	if (k == 1)
	{
		Process_IV70();
		Process_IV9();
		Process_IV72n (iv);
	}
	key[15] += u32cos(iv) ? 0xA82B365 : key[7];
	key[17] -= u32cos(key[11]) ? 0x9AA8540 : iv;
	iv ^= u32sin(key[12]) ? 0x3B018731 : key[12];
	if (k == 2)
	{
		Process_IV69();
		Process_IV70();
		Recurse_IV13 (key, iv);
	}
	key[7] ^= u32sin(key[17]) ? 0x836B3E03 : key[6];
	key[2] ^= key[6] + 0x1E0BBA53;
	key[15] += 0x812EAA9D - key[1];
	if (!k)
	{
		Process_IV42();
		Process_IV37();
		Recurse_IV14 (key, key[2]);
	}
	key[1] ^= (key[14] < 0x812EAA9D) ? key[14] : iv;
	return iv;
}


////////////////////////////////////////


u32 Expand_IV16 (u32 * const key, u32 iv)
{
	u32			k = (key[12] ^ iv ^ key[5]) % 5;
	
	key[17] = rotl32 (key[17], u32cos(iv) ? 2 : key[19]);
	iv -= iv | 0x16E2A7D1;
	if (k == 2)
	{
		Process_IV8();
		Process_IV8();
		Process_IV71n (key[0]);
	}
	key[15] *= 118 * iv;
	key[12] = rotl32 (key[12], key[10] - 7);
	if (k == 1)
	{
		Process_IV4();
		Process_IV19();
		Process_IV72n (key[3]);
	}
	key[2] += (key[13] < 0x588BA7CA) ? key[13] : iv;
	key[19] -= (key[12] < 0x3F5E1B0) ? key[12] : key[9];
	if (k == 3)
	{
		Process_IV12();
		Process_IV36n (0xBDA03880);
		Recurse_IV13 (key, key[14]);
	}
	iv *= -11;
	key[3] += 76 * key[5];
	if (k == 4)
	{
		Process_IV48();
		Process_IV55();
		Recurse_IV14 (key, key[17]);
	}
	key[11] *= key[3] | 0xA760EE25;
	key[19] += key[12] + 0xA760EE25;
	if (!k)
	{
		Process_IV32();
		Process_IV11();
		Recurse_IV15 (key, key[6]);
	}
	key[15] = rotr32 (key[15], (key[14] < 0x9161D683) ? key[14] : key[9]);
	return iv;
}


////////////////////////////////////////


u32 Expand_IV17 (u32 * const key, u32 iv)
{
	u32			k = (key[14] ^ key[2] ^ key[6]) % 6;
	
	key[1] += u32sin(key[1]) ? 0x1FAE4F0 : key[17];
	if (k == 4)
	{
		Process_IV67n (0xF37F8F83);
		Process_IV52n (0x871A4085);
		Process_IV71n (key[7]);
	}
	key[3] -= rotl32 (key[9], 5);
	key[12] *= rotr32 (key[4], 0xE64E52F3);
	if (k == 3)
	{
		Process_IV28();
		Process_IV56();
		Process_IV72n (iv);
	}
	iv -= rotl32 (iv, 18);
	key[19] ^= iv + 0x222E1310;
	if (k == 2)
	{
		Process_IV38();
		Process_IV52n (0xC66DA7C2);
		Recurse_IV13 (key, key[18]);
	}
	key[17] ^= iv - 0x7FAB735B;
	if (!k)
	{
		Process_IV3n (0xD2430E50);
		Process_IV25();
		Recurse_IV14 (key, iv);
	}
	key[14] |= key[1] ^ 0x71B103BD;
	iv = rotr32 (iv, 6 * key[16]);
	if (k == 1)
	{
		Process_IV48();
		Process_IV60();
		Recurse_IV15 (key, key[17]);
	}
	key[0] ^= u32root (key[15]);
	key[14] = rotr32 (key[14], u32cos(key[15]) ? 8 : key[1]);
	if (!k)
	{
		Process_IV56();
		Process_IV50();
		Recurse_IV16 (key, key[9]);
	}
	key[10] -= u32cos(key[13]) ? 0xF83DD71A : key[10];
	return iv;
}


////////////////////////////////////////


u32 Expand_IV18 (u32 * const key, u32 iv)
{
	u32			k = key[14] % 7;
	
	iv -= 31 * key[6];
	if (k == 5)
	{
		Process_IV6();
		Process_IV7n (0x3DB5CDC8);
		Process_IV71n (key[0]);
	}
	key[14] ^= key[15] - 0x274BB11;
	if (k == 4)
	{
		Process_IV11();
		Process_IV13();
		Process_IV72n (key[12]);
	}
	iv ^= 8 * key[1];
	if (k == 2)
	{
		Process_IV47n (0x1D06A87F);
		Process_IV48();
		Recurse_IV13 (key, key[13]);
	}
	key[16] = rotl32 (key[16], u32root (key[15]));
	key[19] *= u32root (key[10]);
	if (k == 3)
	{
		Process_IV5();
		Process_IV32();
		Recurse_IV14 (key, key[4]);
	}
	iv += key[16] | 0x1DF5D7AD;
	if (!k)
	{
		Process_IV35();
		Process_IV12();
		Recurse_IV15 (key, key[4]);
	}
	iv *= key[2] + 0xC70282A8;
	if (!k)
	{
		Process_IV5();
		Process_IV54();
		Recurse_IV16 (key, key[9]);
	}
	key[6] &= iv - 0x9798A83;
	iv = rotr32 (iv, 2 * key[11]);
	if (k == 1)
	{
		Process_IV45();
		Process_IV17();
		Recurse_IV17 (key, key[7]);
	}
	key[2] ^= (key[9] < 0x2EEDED9) ? key[9] : key[12];
	return iv;
}


////////////////////////////////////////


u32 Expand_IV19 (u32 * const key, u32 iv)
{
	u32			k = (key[13] ^ iv ^ key[4]) & 7;
	
	key[16] *= key[15];
	if (!k)
	{
		Process_IV27();
		Process_IV40();
		Process_IV71n (iv);
	}
	key[14] = rotr32 (key[14], 87 * key[11]);
	if (k == 2)
	{
		Process_IV12();
		Process_IV68n (0x73492C37);
		Process_IV72n (key[16]);
	}
	iv &= iv ^ 0xBFEECFFE;
	if (k == 6)
	{
		Process_IV13();
		Process_IV68n (0x7FE25F6B);
		Recurse_IV13 (key, key[7]);
	}
	iv += u32cos(iv) ? 0xD68DC95 : key[5];
	key[2] ^= u32sin(key[7]) ? 0x2124BD5 : iv;
	if (k == 4)
	{
		Process_IV21();
		Process_IV26();
		Recurse_IV14 (key, key[5]);
	}
	key[2] ^= (iv < 0xA427B60) ? iv : key[19];
	if (!k)
	{
		Process_IV1();
		Process_IV66();
		Recurse_IV15 (key, iv);
	}
	key[12] -= u32root (iv);
	if (k == 1)
	{
		Process_IV48();
		Process_IV65();
		Recurse_IV16 (key, key[15]);
	}
	key[16] -= 0x61A83016 | key[4];
	if (k == 3)
	{
		Process_IV1();
		Process_IV48();
		Recurse_IV17 (key, iv);
	}
	iv *= u32root (iv);
	key[13] *= 0x59F1E662 + key[16];
	if (k == 7)
	{
		Process_IV26();
		Process_IV15();
		Recurse_IV18 (key, key[19]);
	}
	key[3] ^= 0x699B23 * key[12];
	return iv;
}


////////////////////////////////////////


u32 Expand_IV20 (u32 * const key, u32 iv)
{
	u32			k = (iv ^ key[7] ^ key[12]) % 9;
	
	iv = rotr32 (iv, u32root (iv));
	if (k == 8)
	{
		Process_IV46();
		Process_IV29n (0x141586A);
		Process_IV71n (key[15]);
	}
	key[4] += 15 * key[16];
	if (!k)
	{
		Process_IV16n (0x1CB835FD);
		Process_IV63n (0x835400E0);
		Process_IV72n (key[16]);
	}
	key[10] ^= rotr32 (key[15], 30);
	if (k == 1)
	{
		Process_IV13();
		Process_IV42();
		Recurse_IV13 (key, iv);
	}
	key[7] -= u32sin(iv) ? 0x0D93E92C : key[16];
	if (k == 2)
	{
		Process_IV68n (0x66E0FF5C);
		Process_IV59();
		Recurse_IV14 (key, key[17]);
	}
	key[6] *= rotr32 (key[10], 7);
	if (k == 6)
	{
		Process_IV15();
		Process_IV55();
		Recurse_IV15 (key, key[14]);
	}
	iv -= 90 * key[16];
	if (k == 4)
	{
		Process_IV6();
		Process_IV39n (0x7C7D7E42);
		Recurse_IV16 (key, key[4]);
	}
	key[3] -= key[16] & 0xEFF9DB02;
	if (!k)
	{
		Process_IV15();
		Process_IV66();
		Recurse_IV17 (key, key[13]);
	}
	iv += u32cos(key[19]) ? 0x39AEBDF : key[5];
	if (k == 7)
	{
		Process_IV64();
		Process_IV59();
		Recurse_IV18 (key, key[6]);
	}
	key[13] |= u32root (key[10]);
	if (k == 5)
	{
		Process_IV25();
		Process_IV68n (0x54AE62D0);
		Recurse_IV19 (key, key[14]);
	}
	iv = rotl32 (iv, 26 * iv);
	key[14] -= u32sin(key[1]) ? 0xB95DC2D3 : key[18];
	return iv;
}


////////////////////////////////////////


u32 Expand_IV21 (u32 * const key, u32 iv)
{
	u32			k = (key[17] ^ key[16] ^ key[7]) % 10;
	
	key[15] -= 13 * key[7];
	if (k == 2)
	{
		Process_IV28();
		Process_IV54();
		Process_IV71n (key[14]);
	}
	key[7] += key[5] ^ 0x28CA4358;
	if (k == 1)
	{
		Process_IV17();
		Process_IV30n (0xC14393E2);
		Process_IV72n (key[10]);
	}
	key[10] += iv & 0xE9F1006;
	if (k == 9)
	{
		Process_IV67n (0x3C50D16);
		Process_IV2();
		Recurse_IV13 (key, iv);
	}
	key[19] *= (key[0] < 0xB71D9592) ? key[0] : key[14];
	if (k == 5)
	{
		Process_IV16n (0x6481D348);
		Process_IV54();
		Recurse_IV14 (key, iv);
	}
	key[16] += 0x7C476077 - key[0];
	if (k == 4)
	{
		Process_IV70();
		Process_IV35();
		Recurse_IV15 (key, key[10]);
	}
	iv ^= key[10] << 6;
	if (!k)
	{
		Process_IV25();
		Process_IV42();
		Recurse_IV16 (key, key[4]);
	}
	key[3] += u32sin(key[12]) ? 0x7B0CA6E0 : iv;
	if (k == 6)
	{
		Process_IV61n (0xFCD29227);
		Process_IV47n (0x3FFF3F1E);
		Recurse_IV17 (key, key[2]);
	}
	iv |= 0x2FF561CA * iv;
	if (k == 8)
	{
		Process_IV62n (0x5BCC4FBE);
		Process_IV47n (0x8328D41F);
		Recurse_IV18 (key, key[3]);
	}
	key[14] += rotr32 (key[0], 26);
	if (k == 3)
	{
		Process_IV68n (0x7F1F0A41);
		Process_IV37();
		Recurse_IV19 (key, iv);
	}
	key[14] -= (key[6] < 0x2C23ABF1) ? key[6] : key[19];
	if (k == 7)
	{
		Process_IV63n (0x3C12C053);
		Process_IV7n (0x302EE99C);
		Recurse_IV20 (key, key[17]);
	}
	key[4] &= 14 * key[11];
	return iv;
}


////////////////////////////////////////


u32 Expand_IV22 (u32 * const key, u32 iv)
{
	u32			k = (iv ^ key[2] ^ key[6]) % 11;
	
	key[17] = rotr32 (key[17], iv - 7);
	if (k == 8)
	{
		Process_IV39n (0x74FA76D5);
		Process_IV62n (0x6D3C052C);
		Process_IV71n (key[19]);
	}
	key[16] -= 0xF9263500 & key[8];
	if (!k)
	{
		Process_IV66();
		Process_IV55();
		Process_IV72n (key[14]);
	}
	iv += (key[9] ^ 0x32C5F54);
	if (k == 1)
	{
		Process_IV47n (0x187AA563);
		Process_IV44();
		Recurse_IV13 (key, iv);
	}
	key[15] += (key[4] < 0x763BB14) ? key[4] : iv;
	if (k == 6)
	{
		Process_IV28();
		Process_IV63n (0x290286CE);
		Recurse_IV14 (key, key[18]);
	}
	key[4] += key[11] + 0x1B2FADB0;
	if (k == 10)
	{
		Process_IV37();
		Process_IV26();
		Recurse_IV15 (key, key[14]);
	}
	iv &= key[3] & 0x4E081541;
	if (k == 9)
	{
		Process_IV55();
		Process_IV3n (0xD89C09D3);
		Recurse_IV16 (key, key[14]);
	}
	key[18] ^= (iv < 0x22E75CE0) ? iv : key[3];
	if (k == 4)
	{
		Process_IV32();
		Process_IV20n (0x309C6D30);
		Recurse_IV17 (key, iv);
	}
	iv |= rotl32 (key[14], 102);
	if (k == 3)
	{
		Process_IV41();
		Process_IV12();
		Recurse_IV18 (key, iv);
	}
	key[3] += rotr32 (iv, 19);
	if (k == 2)
	{
		Process_IV65();
		Process_IV7n (0x33822AB7);
		Recurse_IV19 (key, iv);
	}
	key[9] ^= 52 * key[7];
	if (k == 5)
	{
		Process_IV35();
		Process_IV16n (0xD0D19C61);
		Recurse_IV20 (key, key[1]);
	}
	iv *= 0xB1DB36B2 * key[0];
	if (!k)
	{
		Process_IV19();
		Process_IV58n (0xCE82C1C);
		Recurse_IV21 (key, key[17]);
	}
	key[10] *= (key[17] < 0xD066ADA) ? key[17] : iv;
	return iv;
}


////////////////////////////////////////


u32 Expand_IV23 (u32 * const key, u32 iv)
{
	u32			k = (key[6] ^ iv ^ key[5]) % 12;
	
	if (k == 2)
	{
		Process_IV43();
		Process_IV19();
		Process_IV71n (key[11]);
	}
	key[17] = rotl32 (key[17], key[5] - 0x2E74D55C);
	if (k == 9)
	{
		Process_IV49n (0x6E337D8D);
		Process_IV29n (0xEC7C0E9);
		Process_IV72n (key[10]);
	}
	iv = rotl32 (iv, 0x3FCB120B + key[2]);
	if (k == 11)
	{
		Process_IV61n (0xAF5BAF57);
		Process_IV14();
		Recurse_IV13 (key, iv);
	}
	key[14] |= 0x3FC983D0 + iv;
	if (k == 8)
	{
		Process_IV62n (0x59806A89);
		Process_IV38();
		Recurse_IV14 (key, key[2]);
	}
	if (k == 10)
	{
		Process_IV23();
		Process_IV6();
		Recurse_IV15 (key, key[2]);
	}
	key[10] = rotl32 (key[10], u32cos(key[11]) ? 0x3FC983D0 : key[11]);
	if (!k)
	{
		Process_IV62n (0x50F929B8);
		Process_IV70();
		Recurse_IV16 (key, iv);
	}
	key[0] += key[2] + 0x56775D25;
	if (k == 6)
	{
		Process_IV52n (0x717422DD);
		Process_IV41();
		Recurse_IV17 (key, iv);
	}
	iv |= 123 * key[9];
	if (k == 1)
	{
		Process_IV4();
		Process_IV24();
		Recurse_IV18 (key, key[6]);
	}
	if (k == 5)
	{
		Process_IV3n (0x693CB362);
		Process_IV38();
		Recurse_IV19 (key, key[0]);
	}
	key[8] = rotr32 (key[8], (iv < 0x48821AB) ? iv : key[8]);
	if (!k)
	{
		Process_IV43();
		Process_IV62n (0x56278C42);
		Recurse_IV20 (key, key[10]);
	}
	key[12] ^= 48 * key[18];
	if (k == 3)
	{
		Process_IV59();
		Process_IV16n (0xD061FA2F);
		Recurse_IV21 (key, key[17]);
	}
	key[18] |= 58 * key[4];
	if (k == 7)
	{
		Process_IV4();
		Process_IV70();
		Recurse_IV22 (key, key[5]);
	}
	if (k == 4)
	{
		Process_IV21();
		Process_IV56();
		Process_IV71n (key[4]);
	}
	key[5] ^= u32cos(key[8]) ? 0x16925B88 : key[8];
	return iv;
}


////////////////////////////////////////


u32 Expand_IV24 (u32 * const key, u32 iv)
{
	u32			k = (iv ^ key[8] ^ key[11]) % 13;
	
	if (k == 7)
	{
		Process_IV12();
		Process_IV63n (0x3EB1A4B6);
		Process_IV72n (iv);
	}
	key[2] += u32sin(key[16]) ? 0xBE51568 : key[17];
	if (!k)
	{
		Process_IV31();
		Process_IV1();
		Recurse_IV13 (key, key[0]);
	}
	iv -= (key[15] < 0x214D38C3) ? key[15] : key[14];
	if (k == 6)
	{
		Process_IV18n (0xE50F49F3);
		Process_IV19();
		Recurse_IV14 (key, key[9]);
	}
	iv += 0x20F1E8E5 - key[17];
	if (k == 1)
	{
		Process_IV55();
		Process_IV16n (0x91B25DAB);
		Recurse_IV15 (key, key[19]);
	}
	iv *= 113;
	if (k == 5)
	{
		Process_IV19();
		Process_IV40();
		Recurse_IV16 (key, key[5]);
	}
	key[4] |= iv - 0x0D896A46;
	if (k == 11)
	{
		Process_IV63n (0x291937D1);
		Process_IV70();
		Recurse_IV17 (key, key[2]);
	}
	if (k == 10)
	{
		Process_IV34();
		Process_IV3n (0x2DE98C73);
		Recurse_IV18 (key, key[16]);
	}
	key[19] = rotl32 (key[19], u32cos(key[4]) ? 0x0D896A46 : key[4]);
	if (k == 12)
	{
		Process_IV26();
		Process_IV49n (0x37E716E7);
		Recurse_IV19 (key, key[9]);
	}
	key[5] = rotr32 (key[5], 9 * key[15]);
	if (!k)
	{
		Process_IV2();
		Process_IV62n (0x57B2250F);
		Recurse_IV20 (key, key[12]);
	}
	iv = rotl32 (iv, key[14] + 8);
	if (k == 4)
	{
		Process_IV44();
		Process_IV48();
		Recurse_IV21 (key, key[1]);
	}
	key[10] ^= key[12] ^ 0x17E47765;
	if (k == 3)
	{
		Process_IV25();
		Process_IV37();
		Recurse_IV22 (key, iv);
	}
	key[1] ^= 58 * iv;
	if (k == 2)
	{
		Process_IV50();
		Process_IV17();
		Recurse_IV23 (key, key[16]);
	}
	iv *= 77 * iv;
	if (k == 8)
	{
		Process_IV45();
		Process_IV17();
		Process_IV72n (iv);
	}
	if (k == 9)
	{
		Process_IV41();
		Process_IV39n (0x3ED322E1);
		Recurse_IV13 (key, key[0]);
	}
	key[3] = rotr32 (key[3], iv * 0xA588A375);
	return iv;
}

#define RC4_round(i,j,t,k,RC4) ((t)=RC4[i],(j)=((j)+(t)+(k))&0xFF,RC4[i]=RC4[j],RC4[j]=(u8)(t),RC4[(RC4[i]+(t))&0xFF])

void RC4_crypt (u8 * buffer, u32 bytes, RC4_context * const rc4, const u32 test)
{
	u8				t, i = rc4->i, j = rc4->j, z[256], *s;
	
	if (test) memcpy (s = z, rc4->s, 256); else s = rc4->s;
	for (; bytes; bytes--) i++, *buffer++ ^= RC4_round (i, j, t, 0, s);
	if (!test) rc4->i = i, rc4->j = j;

}


int Skype_RC4_Expand_IV (RC4_context * const rc4, const u32 iv, const u32 flags)
{
	u32			i, j, key[20];
	u8			t;
	
	for (i = 0; i < 20; i++) key[i] = iv;
	
	if (flags & 1)
	{
		Expand_IVa (key, iv);
	}
	if (flags & 2)
	{
	//	__asm int 3;
	//	Expand_IVb (key, iv);	// not implemented yet
		printf("not implemented yet\n");
		return -1;
	}
	for (i = 0, j = 0x03020100; i < 256; i += 4, j += 0x04040404) dword(rc4->s+i) = j;
	for (i = 0, j = 0; i < 256; i++)
	{
		RC4_round (i, j, t, ((u8*)key)[i%80], rc4->s);
	}
	rc4->i = 0, rc4->j = 0;

	return 0;
}
