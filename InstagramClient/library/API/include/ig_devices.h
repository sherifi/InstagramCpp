#pragma once

#include <map>
#include <string>

namespace ig
{
	namespace settings
	{
		template <typename T>
		static T DEFAULT_DEVICE = "samsung_galaxy_s9_plus";

		template <typename T>
		static const std::map<T, std::map<T, T>> DEVICES = {
			{
				//Released on March 2016
				"samsung_galaxy_s7",
				{
					{"instagram_version", "26.0.0.10.86"},
					{"android_version", "24"},
					{"android_release", "7.0"},
					{"dpi", "640dpi"},
					{"resolution", "1440x2560"},
					{"manufacturer", "samsung"},
					{"device", "SM-G930F"},
					{"model", "herolte"},
					{"cpu", "samsungexynos8890"}
				}
			},
			{
				//Released on January 2017
				"huawei_mate_9_pro",
				{
					{"instagram_version", "26.0.0.10.86"},
					{"android_version","24"},
					{"android_release", "7.0"},
					{"dpi", "640dpi"},
					{"resolution", "1440x2560"},
					{"manufacturer", "HUAWEI"},
					{"device", "LON-L29"},
					{"model", "HWLON"},
					{"cpu", "hi3660"}
				}
			},
			{
				//Released on February 2018
				"samsung_galaxy_s9_plus",
				{
					{"instagram_version", "121.0.0.3.119"},
					{"android_version", "24"},
					{"android_release", "7.0"},
					{"dpi", "640dpi"},
					{"resolution", "1440x2560"},
					{"manufacturer", "samsung"},
					{"device", "SM-G965F"},
					{"model", "star2qltecs"},
					{"cpu", "samsungexynos9810"}
				}
			},
			{
				//Released on November 2016
				"one_plus_3t",
				{
					{"instagram_version", "26.0.0.10.86"},
					{"android_version", "24"},
					{"android_release", "7.0"},
					{"dpi", "380dpi"},
					{"resolution", "1080x1920"},
					{"manufacturer", "OnePlus"},
					{"device", "ONEPLUS A3010"},
					{"model", "OnePlus3T"},
					{"cpu", "qcom"}
				}
			},
			{
				//Released on April 2016
				"lg_g5",
				{
					{"instagram_version", "26.0.0.10.86"},
					{"android_version", "23"},
					{"android_release", "6.0.1"},
					{"dpi", "640dpi"},
					{"resolution", "1440x2392"},
					{"manufacturer", "LGE/lge"},
					{"device", "RS988"},
					{"model", "h1"},
					{"cpu", "h1"}
				}
			},
			{
				//Released on June 2016
				"zte_axon_7",
				{
					{"instagram_version", "26.0.0.10.86"},
					{"android_version", "23"},
					{"android_release", "6.0.1"},
					{"dpi", "640dpi"},
					{"resolution", "1440x2560"},
					{"manufacturer", "ZTE"},
					{"device", "ZTE A2017U"},
					{"model", "ailsa_ii"},
					{"cpu", "qcom"}
				}
			},
			{
				//Released on March 2016
				"samsung_galaxy_s7_edge",
				{
					{"instagram_version", "26.0.0.10.86"},
					{"android_version", "23"},
					{"android_release", "6.0.1"},
					{"dpi", "640dpi"},
					{"resolution", "1440x2560"},
					{"manufacturer", "samsung"},
					{"device", "SM-G935"},
					{"model", "hero2lte"},
					{"cpu", "samsungexynos8890"}
				}
			}
		};

		template <typename T>
		static const std::map<T, std::map<T, T>> DEVICES_EXPERIMENTAL = {
			{
				"device_001",
				{
					{"carrier", "NTT docomo"},
					{"manufacturer", "Fujitsu"},
					{"model_name", "arrows NX9 F - 52A"},
					{"release_date", "2020 / 12 / 18"},
					{"os", "Android 10"},
					{"resolution", "1080 * 2280"},
					{"processor", "Snapdragon 765G(2.4GHz ＆ 2.2GHz ＆ 1.8GHz - Octa)"},
					{"gpu", "Adreno 620"},
					{"location", "JP"}
				}
			},
			{
				"device_002",
				{
					{"carrier", "NTT docomo"},
					{"manufacturer", "Lenovo"},
					{"model_name", "dtab Compact d - 42A"},
					{"release_date", "2020 / 12 / 18"},
					{"os", "Android 10"},
					{"resolution", "1200 * 1920"},
					{"processor", "Snapdragon 665 (2GHz + 1.8GHz - Octa)"},
					{"gpu", "Adreno 610"},
					{"location", "JP"}
				}
			},
			{
				"device_003",
				{
					{"carrier", "NTT docomo"},
					{"manufacturer", "LG"},
					{"model_name", "VELVET L - 52A"},
					{"release_date", "2020 / 12 / 18"},
					{"os", "Android 10"},
					{"resolution", "1080 * 2460"},
					{"processor", "Snapdragon 765G(2.4GHz ＆ 2.2GHz ＆ 1.8GHz - Octa)"},
					{"gpu", "Adreno 620"},
					{"location", "JP"}
				}
			},
			{
				"device_004",
				{
					{"carrier", "Sim Free"},
					{"manufacturer", "Apple"},
					{"model_name", "iPhone 12 mini"},
					{"release_date", "2020 / 11 / 13"},
					{"os", "iOS 14.1"},
					{"resolution", "1080 * 2340"},
					{"processor", "Apple A14 Bionic(3GHz - Hexa)"},
					{"gpu", "Apple A14"},
					{"location", "JP"}
				}
			},
			{
				"device_005",
				{
					{"carrier", "Sim Free"},
					{"manufacturer", "Apple"},
					{"model_name", "iPhone 12 Pro Max"},
					{"release_date", "2020 / 11 / 13"},
					{"os", "iOS 14.1"},
					{"resolution", "1284 * 2778"},
					{"processor", "Apple A14 Bionic(3GHz - Hexa)"},
					{"gpu", "Apple A14"},
					{"location", "JP"}
				}
			},
			{
				"device_006",
				{
					{"carrier", "NTT docomo"},
					{"manufacturer", "Sharp"},
					{"model_name", "AQUOS sense4 SH - 41A"},
					{"release_date", "2020 / 11 / 12"},
					{"os", "Android 10"},
					{"resolution", "1080 * 2280"},
					{"processor", "Snapdragon 720G(2.3GHz & amp; 1.8GHz - Octa)"},
					{"gpu", "Adreno 618"},
					{"location", "JP"}
				}
			},
			{
				"device_007",
				{
					{"carrier", "NTT docomo"},
					{"manufacturer", "Sony"},
					{"model_name", "Xperia 5 II SO - 52A"},
					{"release_date", "2020 / 11 / 12"},
					{"os", "Android 10"},
					{"resolution", "1080 * 2520"},
					{"processor", "Snapdragon 865 (2.8GHz & amp; 2.4GHz & amp; 1.8GHz - Octa)"},
					{"gpu", "Adreno 650"},
					{"location", "JP"}
				}
			},
			{
				"device_008",
				{
					{"carrier", "au by KDDI"},
					{"manufacturer", "Samsung"},
					{"model_name", "Galaxy A51 5G SCG07"},
					{"release_date", "2020 / 11 / 07"},
					{"os", "Android 10"},
					{"resolution", "1080 * 2400"},
					{"processor", "Snapdragon 765G(2.4GHz ＆ 2.2GHz ＆ 1.8GHz - Octa)"},
					{"gpu", "Adreno 620"},
					{"location", "JP"}
				}
			},
			{
				"device_009",
				{
					{"carrier", "NTT docomo"},
					{"manufacturer", "Samsung"},
					{"model_name", "Galaxy A51 5G SC - 54A"},
					{"release_date", "2020 / 11 / 06"},
					{"os", "Android 10"},
					{"resolution", "1080 * 2400"},
					{"processor", "Snapdragon 765G(2.4GHz ＆ 2.2GHz ＆ 1.8GHz - Octa)"},
					{"gpu", "Adreno 620"},
					{"location", "JP"}
				}
			},
			{
				"device_010",
				{
					{"carrier", "NTT docomo"},
					{"manufacturer", "Samsung"},
					{"model_name", "Galaxy Note20 Ultra 5G SC - 53A"},
					{"release_date", "2020 / 11 / 06"},
					{"os", "Android 10"},
					{"resolution", "1440 * 3088"},
					{"processor", "Snapdragon 865 + (3.1GHz & amp; 2.4GHz & amp; 1.8GHz - Octa)"},
					{"gpu", "Adreno 650"},
					{"location", "JP"}
				}
			},
			{
				"device_011",
				{
					{"carrier", "au by KDDI"},
					{"manufacturer", "Samsung"},
					{"model_name", "Galaxy Z Flip 5G SCG04"},
					{"release_date", "2020 / 11 / 04"},
					{"os", "Android 10"},
					{"resolution", "1080 * 2636"},
					{"processor", "Snapdragon 865 + (3.1GHz & amp; 2.4GHz & amp; 1.8GHz - Octa)"},
					{"gpu", "Adreno 650"},
					{"location", "JP"}
				}
			},
			{
				"device_012",
				{
					{"carrier", "au by KDDI"},
					{"manufacturer", "Samsung"},
					{"model_name", "Galaxy Z Fold2 5G SCG05"},
					{"release_date", "2020 / 11 / 04"},
					{"os", "Android 10"},
					{"resolution", "1768 * 2208"},
					{"processor", "Snapdragon 865 + (3.1GHz & amp; 2.4GHz & amp; 1.8GHz - Octa)"},
					{"gpu", "Adreno 650"},
					{"location", "JP"}
				}
			},
			{
				"device_013",
				{
					{"carrier", "NTT docomo"},
					{"manufacturer", "Samsung"},
					{"model_name", "Galaxy A21 SC - 42A"},
					{"release_date", "2020 / 10 / 23"},
					{"os", "Android 10"},
					{"resolution", "720 * 1560"},
					{"processor", "Exynos 7 Octa 7884B(1.6GHz ＆ 1.3GHz - Octa)"},
					{"gpu", "Mali - G71 MP2"},
					{"location", "JP"}
				}
			},
			{
				"device_014",
				{
					{"carrier", "NTT docomo"},
					{"manufacturer", "Samsung"},
					{"model_name", "Galaxy A21 SC - 42A"},
					{"release_date", "2020 / 10 / 23"},
					{"os", "Android 10"},
					{"resolution", "720 * 1560"},
					{"processor", "Exynos 7 Octa 7884B(1.6GHz ＆ 1.3GHz - Octa)"},
					{"gpu", "Mali - G71 MP2"},
					{"location", "JP"}
				}
			},
			{
				"device_015",
				{
					{"carrier", "Sim Free"},
					{"manufacturer", "Apple"},
					{"model_name", "iPad Air 4"},
					{"release_date", "2020 / 10 / 23"},
					{"os", "iOS 14.2"},
					{"resolution", "1640 * 2360"},
					{"processor", "Apple A14 Bionic(3GHz - Hexa)"},
					{"gpu", "Apple A14"},
					{"location", "JP"}
				}
			},
			{
				"device_016",
				{
					{"carrier", "Sim Free"},
					{"manufacturer", "Apple"},
					{"model_name", "iPhone 12"},
					{"release_date", "2020 / 10 / 23"},
					{"os", "iOS 14.1"},
					{"resolution", "1170 * 2532"},
					{"processor", "Apple A14 Bionic(3GHz - Hexa)"},
					{"gpu", "Apple A14"},
					{"location", "JP"}
				}
			},
			{
				"device_017",
				{
					{"carrier", "Sim Free"},
					{"manufacturer", "Apple"},
					{"model_name", "iPhone 12 Pro"},
					{"release_date", "2020 / 10 / 23"},
					{"os", "iOS 14.1"},
					{"resolution", "1170 * 2532"},
					{"processor", "Apple A14 Bionic(3GHz - Hexa)"},
					{"gpu", "Apple A14"},
					{"location", "JP"}
				}
			},
			{
				"device_018",
				{
					{"carrier", "SoftBank"},
					{"manufacturer", "Sony"},
					{"model_name", "Xperia 5 II A002SO"},
					{"release_date", "2020 / 10 / 17"},
					{"os", "Android 10"},
					{"resolution", "1080 * 2520"},
					{"processor", "Snapdragon 865 (2.8GHz & amp; 2.4GHz & amp; 1.8GHz - Octa)"},
					{"gpu", "Adreno 650"},
					{"location", "JP"}
				}
			},
			{
				"device_name",
				{
					{"carrier", "au by KDDI"},
					{"manufacturer", "Sony"},
					{"model_name", "Xperia 5 II SOG02"},
					{"release_date", "2020 / 10 / 17"},
					{"os", "Android 10"},
					{"resolution", "1080 * 2520"},
					{"processor", "Snapdragon 865 (2.8GHz & amp; 2.4GHz & amp; 1.8GHz - Octa)"},
					{"gpu", "Adreno 650"},
					{"location", "JP"}
				}
			},
			{
				"device_019",
				{
					{"carrier", "au by KDDI"},
					{"manufacturer", "Samsung"},
					{"model_name", "Galaxy Note20 Ultra 5G SCG06"},
					{"release_date", "2020 / 10 / 15"},
					{"os", "Android 10"},
					{"resolution", "1440 * 3088"},
					{"processor", "Snapdragon 865 + (3.1GHz & amp; 2.4GHz & amp; 1.8GHz - Octa)"},
					{"gpu", "Adreno 650"},
					{"location", "JP"}
				}
			},
			{
				"device_020",
				{
					{"carrier", "Sim Free"},
					{"manufacturer", "Google"},
					{"model_name", "Pixel 4a(5G)"},
					{"release_date", "2020 / 10 / 15"},
					{"os", "Android 11"},
					{"resolution", "1080 * 2340"},
					{"processor", "Snapdragon 765G(2.4GHz ＆ 2.2GHz ＆ 1.8GHz - Octa)"},
					{"gpu", "Adreno 620"},
					{"location", "JP"}
				}
			},
			{
				"device_021",
				{
					{"carrier", "Sim Free"},
					{"manufacturer", "Google"},
					{"model_name", "Pixel 5"},
					{"release_date", "2020 / 10 / 15"},
					{"os", "Android 11"},
					{"resolution", "1080 * 2340"},
					{"processor", "Snapdragon 765G(2.4GHz ＆ 2.2GHz ＆ 1.8GHz - Octa)"},
					{"gpu", "Adreno 620"},
					{"location", "JP"}
				}
			},
			{
				"device_022",
				{
					{"carrier", "SoftBank"},
					{"manufacturer", "Sharp"},
					{"model_name", "AQUOS zero5G basic A002SH"},
					{"release_date", "2020 / 10 / 09"},
					{"os", "Android 10"},
					{"resolution", "1080 * 2340"},
					{"processor", "Snapdragon 765 (2.3GHz ＆ 2.2GHz ＆ 1.8GHz - Octa)"},
					{"gpu", "Adreno 620"},
					{"location", "JP"}
				}
			},
			{
				"device_023",
				{
					{"carrier", "NTT docomo"},
					{"manufacturer", "Fujitsu"},
					{"model_name", "Raku - Raku SMART PHONE F - 42A"},
					{"release_date", "2020 / 09 / 23"},
					{"os", "Android 10"},
					{"resolution", "720 * 1280"},
					{"processor", "SDM450(1.8GHz - Octa)"},
					{"gpu", "Adreno 506"},
					{"location", "JP"}
				}
			},
			{
				"device_024",
				{
					{"carrier", "au by KDDI"},
					{"manufacturer", "Sharp"},
					{"model_name", "AQUOS zero5G basic DX SHG02"},
					{"release_date", "2020 / 09 / 19"},
					{"os", "Android 10"},
					{"resolution", "1080 * 2340"},
					{"processor", "Snapdragon 765 (2.3GHz ＆ 2.2GHz ＆ 1.8GHz - Octa)"},
					{"gpu", "Adreno 520"},
					{"location", "JP"}
				}
			},
			{
				"device_025",
				{
					{"carrier", "au by KDDI"},
					{"manufacturer", "Sharp"},
					{"model_name", "AQUOS zero5G basic DX SHG02"},
					{"release_date", "2020 / 09 / 19"},
					{"os", "Android 10"},
					{"resolution", "1080 * 2340"},
					{"processor", "Snapdragon 765 (2.3GHz ＆ 2.2GHz ＆ 1.8GHz - Octa)"},
					{"gpu", "Adreno 520"},
					{"location", "JP"}
				}
			},
			{
				"device_026",
				{
					{"carrier", "Sim Free"},
					{"manufacturer", "Apple"},
					{"model_name", "iPad 8"},
					{"release_date", "2020 / 09 / 18"},
					{"os", "iOS 14.1"},
					{"resolution", "1170 * 2532"},
					{"processor", "Apple A12 Bionic(2.5GHz - Hexa)"},
					{"gpu", "Apple A12"},
					{"location", "JP"}
				}
			}
		};
	} //namespace settings
} //namespace ig

/*
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPad 8/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_8">iPad 8 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 09 / 18 < / td >
<td><a href = "/en/testkit/devicelist/ios-14-0">iOS 14.0 < / a > < / td>
< td>1620 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/KYV48/device_mini.png"><span><a href = "/en/testkit/devicelist/kyv48">GRATINA KYV48< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 09 / 04 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1080 * 2280 < / td >
<td><a href = "/en/testkit/devicelist/mt6765-2-3ghz-1-8ghz-octa-">MT6765(2.3GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/powervr-ge8320">PowerVR GE8320< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/A001SH/device_mini.png"><span><a href = "/en/testkit/devicelist/a001sh">Simple Smartphone 5 A001SH< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 09 / 04 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm450-1-8ghz-octa-">SDM450(1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/d-41A/device_mini.png"><span><a href = "/en/testkit/devicelist/d-41a">dtab d - 41A< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 08 / 28 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1200 * 1920 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-665-2ghz-1-8ghz-octa-">Snapdragon 665 (2GHz + 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-610">Adreno 610 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 4a/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_4a">Pixel 4a< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 08 / 20 < / td >
<td><a href = "/en/testkit/devicelist/android-11">Android 11 < / a > < / td>
< td>1080 * 2340 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-730g-2-2ghz-1-8ghz-octa-">Snapdragon 730G(2.2GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-618">Adreno 618 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 4a/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_4a-2">Pixel 4a< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 08 / 20 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1080 * 2340 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-730g-2-2ghz-1-8ghz-octa-">Snapdragon 730G(2.2GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-618">Adreno 618 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/F-51A/device_mini.png"><span><a href = "/en/testkit/devicelist/f-51a-2">arrows 5G F - 51A< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 07 / 30 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1440 * 3120 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-865-2-8ghz-2-4ghz-1-8ghz-octa-">Snapdragon 865 (2.8GHz & amp; 2.4GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-650">Adreno 650 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/F-51A/device_mini.png"><span><a href = "/en/testkit/devicelist/f-51a">arrows 5G F - 51A< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 07 / 30 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1440 * 3120 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-865-2-8ghz-2-4ghz-1-8ghz-octa-">Snapdragon 865 (2.8GHz & amp; 2.4GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-650">Adreno 650 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/F-41A/device_mini.png"><span><a href = "/en/testkit/devicelist/f-41a-2">arrows Be4 F - 41A< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 06 / 25 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1080 * 2220 < / td >
<td><a href = "/en/testkit/devicelist/sdm450-1-8ghz-octa-">SDM450(1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/F-41A/device_mini.png"><span><a href = "/en/testkit/devicelist/f-41a">arrows Be4 F - 41A< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 06 / 25 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1080 * 2220 < / td >
<td><a href = "/en/testkit/devicelist/sdm450-1-8ghz-octa-">SDM450(1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SC-41A/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-41a-2">Galaxy A41 SC - 41A< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 06 / 25 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1080 * 2400 < / td >
<td><a href = "/en/testkit/devicelist/mt6768-2ghz-1-7ghz-octa-">MT6768(2GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/mali-g52-mc2">Mali - G52 MC2< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SC-41A/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-41a">Galaxy A41 SC - 41A< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 06 / 25 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1080 * 2400 < / td >
<td><a href = "/en/testkit/devicelist/mt6768-2ghz-1-7ghz-octa-">MT6768(2GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/mali-g52-mc2">Mali - G52 MC2< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/L-41A/device_mini.png"><span><a href = "/en/testkit/devicelist/l-41a">LG style3 L - 41A< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 06 / 25 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1440 * 3120 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-8ghz-1-7ghz-octa-">SDM845(2.8GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SO-41A/device_mini.png"><span><a href = "/en/testkit/devicelist/so-41a">Xperia 10 II SO - 41A< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 06 / 25 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1080 * 2520 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-665-2-0ghz-1-8ghz-octa-">Snapdragon 665 (2.0GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-610">Adreno 610 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SO-41A/device_mini.png"><span><a href = "/en/testkit/devicelist/so-41a-2">Xperia 10 II SO - 41A< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 06 / 25 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1080 * 2520 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-665-2-0ghz-1-8ghz-octa-">Snapdragon 665 (2.0GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-610">Adreno 610 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SHV48/device_mini.png"><span><a href = "/en/testkit/devicelist/shv48">AQUOS sense3 basic SHV48< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 06 / 19 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm630-2-2ghz-1-8ghz-octa-">SDM630(2.2GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-508">Adreno 508 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SHV48/device_mini.png"><span><a href = "/en/testkit/devicelist/shv48-2">AQUOS sense3 basic SHV48< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 06 / 19 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm630-2-2ghz-1-8ghz-octa-">SDM630(2.2GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-508">Adreno 508 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SC-52A/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-52a-2">Galaxy S20 + SC - 52A< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 06 / 18 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1440 * 3200 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-865-2-8ghz-2-4ghz-1-8ghz-octa-">Snapdragon 865 (2.8GHz & amp; 2.4GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-650">Adreno 650 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SC-52A/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-52a">Galaxy S20 + SC - 52A< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 06 / 18 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1440 * 3200 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-865-2-8ghz-2-4ghz-1-8ghz-octa-">Snapdragon 865 (2.8GHz & amp; 2.4GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-650">Adreno 650 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SO-51A/device_mini.png"><span><a href = "/en/testkit/devicelist/so-51a">Xperia 1 II SO - 51A< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 06 / 18 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1096 * 2560 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-865-2-8ghz-2-4ghz-1-8ghz-octa-">Snapdragon 865 (2.8GHz & amp; 2.4GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-650">Adreno 650 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SO-51A/device_mini.png"><span><a href = "/en/testkit/devicelist/so-51a-2">Xperia 1 II SO - 51A< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 06 / 18 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1096 * 2560 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-865-2-8ghz-2-4ghz-1-8ghz-octa-">Snapdragon 865 (2.8GHz & amp; 2.4GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-650">Adreno 650 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/L-51A/device_mini.png"><span><a href = "/en/testkit/devicelist/l-51a">V60 ThinQ 5G L - 51A< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 05 / 11 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1080 * 2460 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-865-2-8ghz-2-4ghz-1-8ghz-octa-">Snapdragon 865 (2.8GHz & amp; 2.4GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-650">Adreno 650 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone SE2/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_se2-3">iPhone SE2< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 04 / 24 < / td >
<td><a href = "/en/testkit/devicelist/ios-14-0">iOS 14.0 < / a > < / td>
< td>750 * 1334 < / td >
<td><a href = "/en/testkit/devicelist/apple-a13-bionic-2-7ghz-hexa-">Apple A13 Bionic(2.7GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a13">Apple A13< / a>< / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone SE2/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_se2-2">iPhone SE2< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 04 / 24 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-4-1">iOS 13.4.1 < / a > < / td>
< td>750 * 1334 < / td >
<td><a href = "/en/testkit/devicelist/apple-a13-bionic-2-7ghz-hexa-">Apple A13 Bionic(2.7GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a13">Apple A13< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone SE2/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_se2">iPhone SE2< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 04 / 24 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-5">iOS 13.5 < / a > < / td>
< td>750 * 1334 < / td >
<td><a href = "/en/testkit/devicelist/apple-a13-bionic-2-7ghz-hexa-">Apple A13 Bionic(2.7GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a13">Apple A13< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/908SH/device_mini.png"><span><a href = "/en/testkit/devicelist/908sh-2">AQUOS R5G 908SH< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 03 / 27 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1440 * 3168 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-865-2-8ghz-2-4ghz-1-8ghz-octa-">Snapdragon 865 (2.8GHz & amp; 2.4GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-650">Adreno 650 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/908SH/device_mini.png"><span><a href = "/en/testkit/devicelist/908sh">AQUOS R5G 908SH< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 03 / 27 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1440 * 3168 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-865-2-8ghz-2-4ghz-1-8ghz-octa-">Snapdragon 865 (2.8GHz & amp; 2.4GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-650">Adreno 650 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SCG01/device_mini.png"><span><a href = "/en/testkit/devicelist/scg01">Galaxy S20 5G SCG01< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 03 / 26 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1440 * 3200 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-865-2-8ghz-2-4ghz-1-8ghz-octa-">Snapdragon 865 (2.8GHz & amp; 2.4GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-650">Adreno 650 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SH-51A/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-51a">AQUOS R5G SH - 51A< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 03 / 25 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1440 * 3168 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-865-2-8ghz-2-4ghz-1-8ghz-octa-">Snapdragon 865 (2.8GHz & amp; 2.4GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-650">Adreno 650 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SC-51A/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-51a">Galaxy S20 5G SC - 51A< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 03 / 25 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1440 * 3200 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-865-2-8ghz-2-4ghz-1-8ghz-octa-">Snapdragon 865 (2.8GHz & amp; 2.4GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-650">Adreno 650 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPad Pro 2G 11/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_pro_2g_11">iPad Pro 2G 11 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 03 / 25 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-4">iOS 13.4 < / a > < / td>
< td>1668 * 2388 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12z-bionic-2-5ghz-octa-">Apple A12Z Bionic(2.5GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12z">Apple A12Z< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPad Pro 2G 11/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_pro_2g_11-3">iPad Pro 2G 11 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 03 / 25 < / td >
<td><a href = "/en/testkit/devicelist/ios-14-0">iOS 14.0 < / a > < / td>
< td>1668 * 2388 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12z-bionic-2-5ghz-octa-">Apple A12Z Bionic(2.5GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12z">Apple A12Z< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPad Pro 4G 12.9/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_pro_4g_129">iPad Pro 4G 12.9 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 03 / 25 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-4">iOS 13.4 < / a > < / td>
< td>2048 * 2732 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12z-bionic-2-5ghz-octa-">Apple A12Z Bionic(2.5GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12z">Apple A12Z< / a>< / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPad Pro 4G 12.9/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_pro_4g_129-3">iPad Pro 4G 12.9 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 03 / 25 < / td >
<td><a href = "/en/testkit/devicelist/ios-14-0">iOS 14.0 < / a > < / td>
< td>2048 * 2732 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12z-bionic-2-5ghz-octa-">Apple A12Z Bionic(2.5GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12z">Apple A12Z< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPad Pro 4G 12.9/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_pro_4g_129-2">iPad Pro 4G 12.9 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 03 / 25 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-6">iOS 13.6 < / a > < / td>
< td>2048 * 2732 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12z-bionic-2-5ghz-octa-">Apple A12Z Bionic(2.5GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12z">Apple A12Z< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/NP902KC/device_mini.png"><span><a href = "/en/testkit/devicelist/np902kc">DIGNO Keitai3 902KC< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 03 / 06 < / td >
<td><a href = "/en/testkit/devicelist/android-8-1">Android 8.1.0 < / a > < / td>
< td>480 * 854 < / td >
<td><a href = "/en/testkit/devicelist/msm8909-1-1ghz-quad-">MSM8909(1.1GHz - Quad) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-304">Adreno 304 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SCV47/device_mini.png"><span><a href = "/en/testkit/devicelist/scv47">Galaxy Z Flip SCV47< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 02 / 28 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1080 * 2636 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-855-2-9ghz-2-4ghz-1-7ghz-octa-">Snapdragon 855 + (2.9GHz & amp; 2.4GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-640">Adreno 640 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/KYV47/device_mini.png"><span><a href = "/en/testkit/devicelist/kyv47">BASIO4 KYV47< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 02 / 07 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>720 * 1480 < / td >
<td><a href = "/en/testkit/devicelist/mt6761-2ghz-quad-">MT6761(2GHz - Quad) < / a > < / td>
<td><a href = "/en/testkit/devicelist/powervr-ge8300">PowerVR GE8300< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SH-01M/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-01m">AQUOS zero2 SH - 01M< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 01 / 30 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1080 * 2340 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-855-2-8ghz-2-4ghz-1-7ghz-octa-">Snapdragon 855 (2.8GHz & amp; 2.4GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-640">Adreno 640 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/rakuten-mobile">Rakuten Mobile< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-tinno">Tinno< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/C330/device_mini.png"><span><a href = "/en/testkit/devicelist/c330">Rakuten Mini C330< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2020">2020 < / a > / 01 / 23 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>720 * 1280 < / td >
<td><a href = "/en/testkit/devicelist/sdm439-2ghz-1-45ghz-quad-">SDM439(2GHz & amp; 1.45GHz - Quad) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/901SH/device_mini.png"><span><a href = "/en/testkit/devicelist/901sh">AQUOS sense3 plus 901SH< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 12 / 20 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2220 < / td >
<td><a href = "/en/testkit/devicelist/sdm636-1-8ghz-1-6ghz-octa-">SDM636(1.8GHz & amp; 1.6GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-509">Adreno 509 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/901LG/device_mini.png"><span><a href = "/en/testkit/devicelist/901lg">G8X ThinQ 901LG< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 12 / 06 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2340 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-855-2-9ghz-2-5ghz-1-7ghz-octa-">Snapdragon 855 (2.9GHz & amp; 2.5GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-640">Adreno 640 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/F-01M/device_mini.png"><span><a href = "/en/testkit/devicelist/f-01m">Raku - Raku PHONE F - 01M< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 11 / 22 < / td >
<td><a href = "/en/testkit/devicelist/android-8-1">Android 8.1.0 < / a > < / td>
< td>480 * 854 < / td >
<td><a href = "/en/testkit/devicelist/msm8909-1-1ghz-quad-">MSM8909(1.1GHz - Quad) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-304">Adreno 304 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/907SH/device_mini.png"><span><a href = "/en/testkit/devicelist/907sh">AQUOS sense3 basic 907SH< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 11 / 15 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm630-2-2ghz-1-8ghz-octa-">SDM630(2.2GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-508">Adreno 508 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/901KC/device_mini.png"><span><a href = "/en/testkit/devicelist/901kc">DIGNO BX 901KC< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 11 / 15 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>720 * 1440 < / td >
<td><a href = "/en/testkit/devicelist/sdm429-2ghz-quad-">SDM429(2GHz - Quad) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-504">Adreno 504 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SHV45/device_mini.png"><span><a href = "/en/testkit/devicelist/shv45">AQUOS sense3 SHV45< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 11 / 02 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm630-2-2ghz-1-8ghz-octa-">SDM630(2.2GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-508">Adreno 508 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/rakuten-mobile">Rakuten Mobile< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SH-RM12/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-rm12">AQUOS sense3 lite SH - RM12< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 11 / 01 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm630-2-2ghz-1-8ghz-octa-">SDM630(2.2GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-508">Adreno 508 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SH-02M/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-02m-2">AQUOS sense3 SH - 02M< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 11 / 01 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm630-2-2ghz-1-8ghz-octa-">SDM630(2.2GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-508">Adreno 508 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SH-02M/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-02m">AQUOS sense3 SH - 02M< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 11 / 01 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm630-2-2ghz-1-8ghz-octa-">SDM630(2.2GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-508">Adreno 508 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SC-02M/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-02m">Galaxy A20 SC - 02M< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 11 / 01 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>720 * 1560 < / td >
<td><a href = "/en/testkit/devicelist/exynos-7-octa-7884b-1-6ghz-1-3ghz-octa-">Exynos 7 Octa 7884B(1.6GHz ＆ 1.3GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/mali-g71-mp2">Mali - G71 MP2< / a>< / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SC-02M/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-02m-2">Galaxy A20 SC - 02M< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 11 / 01 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>720 * 1560 < / td >
<td><a href = "/en/testkit/devicelist/exynos-7-octa-7884b-1-6ghz-1-3ghz-octa-">Exynos 7 Octa 7884B(1.6GHz ＆ 1.3GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/mali-g71-mp2">Mali - G71 MP2< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SO-01M/device_mini.png"><span><a href = "/en/testkit/devicelist/so-01m">Xperia 5 SO - 01M< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 11 / 01 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2520 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-855-2-8ghz-2-4ghz-1-7ghz-octa-">Snapdragon 855 (2.8GHz & amp; 2.4GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-640">Adreno 640 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SO-01M/device_mini.png"><span><a href = "/en/testkit/devicelist/so-01m-2">Xperia 5 SO - 01M< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 11 / 01 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2520 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-855-2-8ghz-2-4ghz-1-7ghz-octa-">Snapdragon 855 (2.8GHz & amp; 2.4GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-640">Adreno 640 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SOV42/device_mini.png"><span><a href = "/en/testkit/devicelist/sov42-2">Xperia 8 SOV42< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 10 / 25 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2520 < / td >
<td><a href = "/en/testkit/devicelist/sdm630-2-2ghz-1-8ghz-octa-">SDM630(2.2GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-508">Adreno 508 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SOV42/device_mini.png"><span><a href = "/en/testkit/devicelist/sov42">Xperia 8 SOV42< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 10 / 25 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2520 < / td >
<td><a href = "/en/testkit/devicelist/sdm630-2-2ghz-1-8ghz-octa-">SDM630(2.2GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-508">Adreno 508 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 4/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_4-3">Pixel 4 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 10 / 24 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1080 * 2280 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-855-2-8ghz-2-4ghz-1-7ghz-octa-">Snapdragon 855 (2.8GHz & amp; 2.4GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-640">Adreno 640 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 4/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_4-6">Pixel 4 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 10 / 24 < / td >
<td><a href = "/en/testkit/devicelist/android-11">Android 11 < / a > < / td>
< td>1080 * 2280 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-855-2-8ghz-2-4ghz-1-7ghz-octa-">Snapdragon 855 (2.8GHz & amp; 2.4GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-640">Adreno 640 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 4/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_4-4">Pixel 4 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 10 / 24 < / td >
<td><a href = "/en/testkit/devicelist/android-11">Android 11 < / a > < / td>
< td>1080 * 2280 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-855-2-8ghz-2-4ghz-1-7ghz-octa-">Snapdragon 855 (2.8GHz & amp; 2.4GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-640">Adreno 640 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 4/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_4-2">Pixel 4 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 10 / 24 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1080 * 2280 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-855-2-8ghz-2-4ghz-1-7ghz-octa-">Snapdragon 855 (2.8GHz & amp; 2.4GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-640">Adreno 640 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 4/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_4-5">Pixel 4 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 10 / 24 < / td >
<td><a href = "/en/testkit/devicelist/android-11">Android 11 < / a > < / td>
< td>1080 * 2280 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-855-2-8ghz-2-4ghz-1-7ghz-octa-">Snapdragon 855 (2.8GHz & amp; 2.4GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-640">Adreno 640 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 4/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_4">Pixel 4 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 10 / 24 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1080 * 2280 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-855-2-8ghz-2-4ghz-1-7ghz-octa-">Snapdragon 855 (2.8GHz & amp; 2.4GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-640">Adreno 640 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 4 XL/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_4_xl">Pixel 4 XL< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 10 / 24 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1440 * 3040 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-855-2-8ghz-2-4ghz-1-7ghz-octa-">Snapdragon 855 (2.8GHz & amp; 2.4GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-640">Adreno 640 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 4 XL/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_4_xl-3">Pixel 4 XL< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 10 / 24 < / td >
<td><a href = "/en/testkit/devicelist/android-11">Android 11 < / a > < / td>
< td>1440 * 3040 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-855-2-8ghz-2-4ghz-1-7ghz-octa-">Snapdragon 855 (2.8GHz & amp; 2.4GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-640">Adreno 640 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 4 XL/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_4_xl-4">Pixel 4 XL< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 10 / 24 < / td >
<td><a href = "/en/testkit/devicelist/android-11">Android 11 < / a > < / td>
< td>1440 * 3040 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-855-2-8ghz-2-4ghz-1-7ghz-octa-">Snapdragon 855 (2.8GHz & amp; 2.4GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-640">Adreno 640 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 4 XL/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_4_xl-2">Pixel 4 XL< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 10 / 24 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1440 * 3040 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-855-2-8ghz-2-4ghz-1-7ghz-octa-">Snapdragon 855 (2.8GHz & amp; 2.4GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-640">Adreno 640 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SC-01M/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-01m">Galaxy Note10 + SC - 01M< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 10 / 18 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1440 * 3040 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-855-2-8ghz-2-4ghz-1-7ghz-octa-">Snapdragon 855 (2.8GHz & amp; 2.4GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-640">Adreno 640 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SC-01M/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-01m-2">Galaxy Note10 + SC - 01M< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 10 / 18 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1440 * 3040 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-855-2-8ghz-2-4ghz-1-7ghz-octa-">Snapdragon 855 (2.8GHz & amp; 2.4GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-640">Adreno 640 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/rakuten-mobile">Rakuten Mobile< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SM-A750C/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-a750c">Galaxy A7 SM - A750C< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 10 / 01 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2220 < / td >
<td><a href = "/en/testkit/devicelist/exynos-7-octa-7885-2-2ghz-1-6ghz-octa-">Exynos 7 Octa 7885 (2.2GHz & amp; 1.6GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/mali-g71-mp2">Mali - G71 MP2< / a>< / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPad 7/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_7-4">iPad 7 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 09 / 30 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-4-1">iOS 13.4.1 < / a > < / td>
< td>1620 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/apple-a10-2-3ghz-quad-">Apple A10(2.3GHz - Quad) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a10">Apple A10< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPad 7/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_7-2">iPad 7 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 09 / 30 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-1">iOS 13.1 < / a > < / td>
< td>1620 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/apple-a10-2-3ghz-quad-">Apple A10(2.3GHz - Quad) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a10">Apple A10< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPad 7/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_7">iPad 7 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 09 / 30 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-3-1">iOS 13.3.1 < / a > < / td>
< td>1620 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/apple-a10-2-3ghz-quad-">Apple A10(2.3GHz - Quad) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a10">Apple A10< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPad 7/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_7-3">iPad 7 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 09 / 30 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-4-1">iOS 13.4.1 < / a > < / td>
< td>1620 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/apple-a10-2-3ghz-quad-">Apple A10(2.3GHz - Quad) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a10">Apple A10< / a>< / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone 11/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_11-4">iPhone 11 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 09 / 20 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-2-3">iOS 13.2.3 < / a > < / td>
< td>828 * 1792 < / td >
<td><a href = "/en/testkit/devicelist/apple-a13-bionic-2-7ghz-hexa-">Apple A13 Bionic(2.7GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a13">Apple A13< / a>< / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone 11/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_11-7">iPhone 11 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 09 / 20 < / td >
<td><a href = "/en/testkit/devicelist/ios-14-0">iOS 14.0 < / a > < / td>
< td>828 * 1792 < / td >
<td><a href = "/en/testkit/devicelist/apple-a13-bionic-2-7ghz-hexa-">Apple A13 Bionic(2.7GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a13">Apple A13< / a>< / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone 11/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_11-6">iPhone 11 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 09 / 20 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-7">iOS 13.7 < / a > < / td>
< td>828 * 1792 < / td >
<td><a href = "/en/testkit/devicelist/apple-a13-bionic-2-7ghz-hexa-">Apple A13 Bionic(2.7GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a13">Apple A13< / a>< / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone 11/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_11-3">iPhone 11 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 09 / 20 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-1">iOS 13.1 < / a > < / td>
< td>828 * 1792 < / td >
<td><a href = "/en/testkit/devicelist/apple-a13-bionic-2-7ghz-hexa-">Apple A13 Bionic(2.7GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a13">Apple A13< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone 11/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_11-5">iPhone 11 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 09 / 20 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-6">iOS 13.6 < / a > < / td>
< td>828 * 1792 < / td >
<td><a href = "/en/testkit/devicelist/apple-a13-bionic-2-7ghz-hexa-">Apple A13 Bionic(2.7GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a13">Apple A13< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone 11/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_11">iPhone 11 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 09 / 20 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-0">iOS 13.0 < / a > < / td>
< td>828 * 1792 < / td >
<td><a href = "/en/testkit/devicelist/apple-a13-bionic-2-7ghz-hexa-">Apple A13 Bionic(2.7GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a13">Apple A13< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone 11/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_11-2">iPhone 11 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 09 / 20 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-0">iOS 13.0 < / a > < / td>
< td>828 * 1792 < / td >
<td><a href = "/en/testkit/devicelist/apple-a13-bionic-2-7ghz-hexa-">Apple A13 Bionic(2.7GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a13">Apple A13< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone 11 Pro/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_11_pro-2">iPhone 11 Pro< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 09 / 20 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-0">iOS 13.0 < / a > < / td>
< td>1125 * 2436 < / td >
<td><a href = "/en/testkit/devicelist/apple-a13-bionic-2-7ghz-hexa-">Apple A13 Bionic(2.7GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a13">Apple A13< / a>< / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone 11 Pro/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_11_pro-3">iPhone 11 Pro< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 09 / 20 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-1">iOS 13.1 < / a > < / td>
< td>1125 * 2436 < / td >
<td><a href = "/en/testkit/devicelist/apple-a13-bionic-2-7ghz-hexa-">Apple A13 Bionic(2.7GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a13">Apple A13< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone 11 Pro/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_11_pro-5">iPhone 11 Pro< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 09 / 20 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-7">iOS 13.7 < / a > < / td>
< td>1125 * 2436 < / td >
<td><a href = "/en/testkit/devicelist/apple-a13-bionic-2-7ghz-hexa-">Apple A13 Bionic(2.7GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a13">Apple A13< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone 11 Pro/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_11_pro">iPhone 11 Pro< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 09 / 20 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-0">iOS 13.0 < / a > < / td>
< td>1125 * 2436 < / td >
<td><a href = "/en/testkit/devicelist/apple-a13-bionic-2-7ghz-hexa-">Apple A13 Bionic(2.7GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a13">Apple A13< / a>< / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone 11 Pro/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_11_pro-6">iPhone 11 Pro< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 09 / 20 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-5">iOS 13.5 < / a > < / td>
< td>1125 * 2436 < / td >
<td><a href = "/en/testkit/devicelist/apple-a13-bionic-2-7ghz-hexa-">Apple A13 Bionic(2.7GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a13">Apple A13< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone 11 Pro/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_11_pro-7">iPhone 11 Pro< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 09 / 20 < / td >
<td><a href = "/en/testkit/devicelist/ios-14-0">iOS 14.0 < / a > < / td>
< td>1125 * 2436 < / td >
<td><a href = "/en/testkit/devicelist/apple-a13-bionic-2-7ghz-hexa-">Apple A13 Bionic(2.7GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a13">Apple A13< / a>< / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone 11 Pro/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_11_pro-4">iPhone 11 Pro< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 09 / 20 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-5-1">iOS 13.5.1 < / a > < / td>
< td>1125 * 2436 < / td >
<td><a href = "/en/testkit/devicelist/apple-a13-bionic-2-7ghz-hexa-">Apple A13 Bionic(2.7GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a13">Apple A13< / a>< / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone 11 Pro Max/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_11_pro_max-3">iPhone 11 Pro Max< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 09 / 20 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-1">iOS 13.1 < / a > < / td>
< td>1242 * 2688 < / td >
<td><a href = "/en/testkit/devicelist/apple-a13-bionic-2-7ghz-hexa-">Apple A13 Bionic(2.7GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a13">Apple A13< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone 11 Pro Max/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_11_pro_max-4">iPhone 11 Pro Max< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 09 / 20 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-6">iOS 13.6 < / a > < / td>
< td>1242 * 2688 < / td >
<td><a href = "/en/testkit/devicelist/apple-a13-bionic-2-7ghz-hexa-">Apple A13 Bionic(2.7GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a13">Apple A13< / a>< / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone 11 Pro Max/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_11_pro_max-5">iPhone 11 Pro Max< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 09 / 20 < / td >
<td><a href = "/en/testkit/devicelist/ios-14-0">iOS 14.0 < / a > < / td>
< td>1242 * 2688 < / td >
<td><a href = "/en/testkit/devicelist/apple-a13-bionic-2-7ghz-hexa-">Apple A13 Bionic(2.7GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a13">Apple A13< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone 11 Pro Max/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_11_pro_max">iPhone 11 Pro Max< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 09 / 20 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-0">iOS 13.0 < / a > < / td>
< td>1242 * 2688 < / td >
<td><a href = "/en/testkit/devicelist/apple-a13-bionic-2-7ghz-hexa-">Apple A13 Bionic(2.7GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a13">Apple A13< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone 11 Pro Max/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_11_pro_max-2">iPhone 11 Pro Max< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 09 / 20 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-0">iOS 13.0 < / a > < / td>
< td>1242 * 2688 < / td >
<td><a href = "/en/testkit/devicelist/apple-a13-bionic-2-7ghz-hexa-">Apple A13 Bionic(2.7GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a13">Apple A13< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/KYV46/device_mini.png"><span><a href = "/en/testkit/devicelist/kyv46">TORQUE G04 KYV46< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 08 / 30 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 1920 < / td >
<td><a href = "/en/testkit/devicelist/sdm660-2-2ghz-1-8ghz-octa-">SDM660(2.2GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-512">Adreno 512 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-asus">Asus< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/ASUS_I01WD/device_mini.png"><span><a href = "/en/testkit/devicelist/asus_i01wd">ZenFone 6 ZS630KL< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 08 / 23 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2340 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-855-2-8ghz-2-4ghz-1-7ghz-octa-">Snapdragon 855 (2.8GHz & amp; 2.4GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-640">Adreno 640 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/F-03L/device_mini.png"><span><a href = "/en/testkit/devicelist/f-03l">arrows Keitai F - 03L < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 07 / 19 < / td >
<td><a href = "/en/testkit/devicelist/android-8-1">Android 8.1.0 < / a > < / td>
< td>480 * 854 < / td >
<td><a href = "/en/testkit/devicelist/msm8909-1-1ghz-quad-">MSM8909(1.1GHz - Quad) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-304">Adreno 304 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/L-01L/device_mini.png"><span><a href = "/en/testkit/devicelist/l-01l">LG style2 L - 01L < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 07 / 12 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm450-1-8ghz-octa-">SDM450(1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SH-03L/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-03l">SH - 03L < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 07 / 05 < / td >
<td><a href = "/en/testkit/devicelist/android-8-1">Android 8.1.0 < / a > < / td>
< td>540 * 960 < / td >
<td><a href = "/en/testkit/devicelist/msm8909-1-1ghz-quad-">MSM8909(1.1GHz - Quad) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-304">Adreno 304 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/801FJ/device_mini.png"><span><a href = "/en/testkit/devicelist/801fj-2">arrows U 801FJ< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 06 / 28 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2280 < / td >
<td><a href = "/en/testkit/devicelist/sdm450-1-8ghz-octa-">SDM450(1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/801FJ/device_mini.png"><span><a href = "/en/testkit/devicelist/801fj">arrows U 801FJ< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 06 / 28 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2280 < / td >
<td><a href = "/en/testkit/devicelist/sdm450-1-8ghz-octa-">SDM450(1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SHV43/device_mini.png"><span><a href = "/en/testkit/devicelist/shv43-2">AQUOS sense2 SHV43< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 06 / 14 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm450-1-8ghz-octa-">SDM450(1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/NP807SH/device_mini.png"><span><a href = "/en/testkit/devicelist/np807sh">Simple Phone 10 807SH< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 06 / 14 < / td >
<td><a href = "/en/testkit/devicelist/android-8-1">Android 8.1.0 < / a > < / td>
< td>540 * 960 < / td >
<td><a href = "/en/testkit/devicelist/msm8909-1-1ghz-quad-">MSM8909(1.1GHz - Quad) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-304">Adreno 304 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SO-03L/device_mini.png"><span><a href = "/en/testkit/devicelist/so-03l">Xperia 1 SO - 03L < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 06 / 14 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1096 * 2560 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-855-2-8ghz-2-4ghz-1-7ghz-octa-">Snapdragon 855 (2.8GHz & amp; 2.4GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-640">Adreno 640 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SO-03L/device_mini.png"><span><a href = "/en/testkit/devicelist/so-03l-2">Xperia 1 SO - 03L < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 06 / 14 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1096 * 2560 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-855-2-8ghz-2-4ghz-1-7ghz-octa-">Snapdragon 855 (2.8GHz & amp; 2.4GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-640">Adreno 640 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/F-02L/device_mini.png"><span><a href = "/en/testkit/devicelist/f-02l-2">arrows Be3 F - 02L < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 06 / 07 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2220 < / td >
<td><a href = "/en/testkit/devicelist/sdm450-1-8ghz-octa-">SDM450(1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/F-02L/device_mini.png"><span><a href = "/en/testkit/devicelist/f-02l">arrows Be3 F - 02L < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 06 / 07 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2220 < / td >
<td><a href = "/en/testkit/devicelist/sdm450-1-8ghz-octa-">SDM450(1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-motorola">Motorola< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/moto g(7) plus/device_mini.png"><span><a href = "/en/testkit/devicelist/moto_g7_plus">moto g7 plus XT1965 - 3 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 06 / 07 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2270 < / td >
<td><a href = "/en/testkit/devicelist/sdm636-1-8ghz-1-6ghz-octa-">SDM636(1.8GHz & amp; 1.6GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-509">Adreno 509 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-motorola">Motorola< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/moto g(7) power/device_mini.png"><span><a href = "/en/testkit/devicelist/moto_g7_power">moto g7 power XT1955 - 7 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 06 / 07 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>720 * 1520 < / td >
<td><a href = "/en/testkit/devicelist/sdm632-1-8ghz-octa-">SDM632(1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SCV43/device_mini.png"><span><a href = "/en/testkit/devicelist/scv43">Galaxy A30 SCV43< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 06 / 06 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2340 < / td >
<td><a href = "/en/testkit/devicelist/exynos-7-octa-7904-1-8ghz-1-6ghz-octa-">Exynos 7 Octa 7904 (1.8GHz & amp; 1.6GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/mali-g71-mp2">Mali - G71 MP2< / a>< / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SCV43/device_mini.png"><span><a href = "/en/testkit/devicelist/scv43-2">Galaxy A30 SCV43< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 06 / 06 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2340 < / td >
<td><a href = "/en/testkit/devicelist/exynos-7-octa-7904-1-8ghz-1-6ghz-octa-">Exynos 7 Octa 7904 (1.8GHz & amp; 1.6GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/mali-g71-mp2">Mali - G71 MP2< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SH-04L/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-04l">AQUOS R3 SH - 04L < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 06 / 01 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1440 * 3120 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-855-2-8ghz-2-4ghz-1-7ghz-octa-">Snapdragon 855 (2.8GHz & amp; 2.4GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-640">Adreno 640 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SH-04L/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-04l-2">AQUOS R3 SH - 04L < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 06 / 01 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1440 * 3120 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-855-2-8ghz-2-4ghz-1-7ghz-octa-">Snapdragon 855 (2.8GHz & amp; 2.4GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-640">Adreno 640 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SC-03L/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-03l">Galaxy S10 SC - 03L < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 06 / 01 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1440 * 3040 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-855-2-8ghz-2-4ghz-1-7ghz-octa-">Snapdragon 855 (2.8GHz & amp; 2.4GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-640">Adreno 640 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SC-03L/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-03l-2">Galaxy S10 SC - 03L < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 06 / 01 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1440 * 3040 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-855-2-8ghz-2-4ghz-1-7ghz-octa-">Snapdragon 855 (2.8GHz & amp; 2.4GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-640">Adreno 640 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SC-04L/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-04l-2">Galaxy S10 + SC - 04L < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 06 / 01 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1440 * 3040 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-855-2-8ghz-2-4ghz-1-7ghz-octa-">Snapdragon 855 (2.8GHz & amp; 2.4GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-640">Adreno 640 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SC-04L/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-04l">Galaxy S10 + SC - 04L < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 06 / 01 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1440 * 3040 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-855-2-8ghz-2-4ghz-1-7ghz-octa-">Snapdragon 855 (2.8GHz & amp; 2.4GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-640">Adreno 640 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SO-02L/device_mini.png"><span><a href = "/en/testkit/devicelist/so-02l-2">Xperia Ace SO - 02L < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 06 / 01 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm630-2-2ghz-1-8ghz-octa-">SDM630(2.2GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-508">Adreno 508 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SO-02L/device_mini.png"><span><a href = "/en/testkit/devicelist/so-02l">Xperia Ace SO - 02L < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 06 / 01 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm630-2-2ghz-1-8ghz-octa-">SDM630(2.2GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-508">Adreno 508 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 3a/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_3a">Pixel 3a< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 05 / 17 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1080 * 2220 < / td >
<td><a href = "/en/testkit/devicelist/sdm670-2ghz-1-7ghz-octa-">SDM670(2GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-615">Adreno 615 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 3a/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_3a-2">Pixel 3a< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 05 / 17 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1080 * 2220 < / td >
<td><a href = "/en/testkit/devicelist/sdm670-2ghz-1-7ghz-octa-">SDM670(2GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-615">Adreno 615 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 3a/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_3a-3">Pixel 3a< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 05 / 17 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1080 * 2220 < / td >
<td><a href = "/en/testkit/devicelist/sdm670-2ghz-1-7ghz-octa-">SDM670(2GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-615">Adreno 615 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 3a/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_3a-5">Pixel 3a< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 05 / 17 < / td >
<td><a href = "/en/testkit/devicelist/android-11">Android 11 < / a > < / td>
< td>1080 * 2220 < / td >
<td><a href = "/en/testkit/devicelist/sdm670-2ghz-1-7ghz-octa-">SDM670(2GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-615">Adreno 615 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 3a/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_3a-4">Pixel 3a< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 05 / 17 < / td >
<td><a href = "/en/testkit/devicelist/android-11">Android 11 < / a > < / td>
< td>1080 * 2220 < / td >
<td><a href = "/en/testkit/devicelist/sdm670-2ghz-1-7ghz-octa-">SDM670(2GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-615">Adreno 615 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 3a/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_3a-6">Pixel 3a< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 05 / 17 < / td >
<td><a href = "/en/testkit/devicelist/android-11">Android 11 < / a > < / td>
< td>1080 * 2220 < / td >
<td><a href = "/en/testkit/devicelist/sdm670-2ghz-1-7ghz-octa-">SDM670(2GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-615">Adreno 615 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 3a XL/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_3a_xl-5">Pixel 3a XL< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 05 / 17 < / td >
<td><a href = "/en/testkit/devicelist/android-11">Android 11 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm670-2ghz-1-7ghz-octa-">SDM670(2GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-615">Adreno 615 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 3a XL/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_3a_xl-3">Pixel 3a XL< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 05 / 17 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm670-2ghz-1-7ghz-octa-">SDM670(2GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-615">Adreno 615 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 3a XL/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_3a_xl-2">Pixel 3a XL< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 05 / 17 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm670-2ghz-1-7ghz-octa-">SDM670(2GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-615">Adreno 615 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 3a XL/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_3a_xl">Pixel 3a XL< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 05 / 17 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm670-2ghz-1-7ghz-octa-">SDM670(2GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-615">Adreno 615 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 3a XL/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_3a_xl-4">Pixel 3a XL< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 05 / 17 < / td >
<td><a href = "/en/testkit/devicelist/android-11">Android 11 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm670-2ghz-1-7ghz-octa-">SDM670(2GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-615">Adreno 615 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/NP805SH/device_mini.png"><span><a href = "/en/testkit/devicelist/np805sh">AQUOS Keitai3 805SH< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 04 / 12 < / td >
<td><a href = "/en/testkit/devicelist/android-8-1">Android 8.1.0 < / a > < / td>
< td>540 * 960 < / td >
<td><a href = "/en/testkit/devicelist/msm8909-1-1ghz-quad-">MSM8909(1.1GHz - Quad) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-304">Adreno 304 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPad Air 3/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_air_3">iPad Air 3 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 03 / 30 < / td >
<td><a href = "/en/testkit/devicelist/ios-12-2">iOS 12.2 < / a > < / td>
< td>1668 * 2224 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPad Air 3/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_air_3-5">iPad Air 3 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 03 / 30 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-4-1">iOS 13.4.1 < / a > < / td>
< td>1668 * 2224 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPad Air 3/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_air_3-3">iPad Air 3 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 03 / 30 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-1">iOS 13.1 < / a > < / td>
< td>1668 * 2224 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPad Air 3/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_air_3-4">iPad Air 3 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 03 / 30 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-6">iOS 13.6 < / a > < / td>
< td>1668 * 2224 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPad mini 5G/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_mini_5g-3">iPad mini 5G< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 03 / 30 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-4-1">iOS 13.4.1 < / a > < / td>
< td>1536 * 2048 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPad mini 5G/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_mini_5g-4">iPad mini 5G< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 03 / 30 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-6">iOS 13.6 < / a > < / td>
< td>1536 * 2048 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPad mini 5G/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_mini_5g-2">iPad mini 5G< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 03 / 30 < / td >
<td><a href = "/en/testkit/devicelist/ios-12-3-1">iOS 12.3.1 < / a > < / td>
< td>1536 * 2048 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPad mini 5G/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_mini_5g">iPad mini 5G< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 03 / 30 < / td >
<td><a href = "/en/testkit/devicelist/ios-12-2">iOS 12.2 < / a > < / td>
< td>1536 * 2048 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-asus">Asus< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/ASUS_X01AD/device_mini.png"><span><a href = "/en/testkit/devicelist/asus_x01ad">ZenFone Max(M2) ZB633KL< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 03 / 15 < / td >
<td><a href = "/en/testkit/devicelist/android-8-1">Android 8.1.0 < / a > < / td>
< td>720 * 1520 < / td >
<td><a href = "/en/testkit/devicelist/sdm632-1-8ghz-octa-">SDM632(1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-asus">Asus< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/ASUS_X01BDA/device_mini.png"><span><a href = "/en/testkit/devicelist/asus_x01bda">ZenFone Max Pro(M2) ZB631KL< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 03 / 15 < / td >
<td><a href = "/en/testkit/devicelist/android-8-1">Android 8.1.0 < / a > < / td>
< td>1080 * 2280 < / td >
<td><a href = "/en/testkit/devicelist/sdm660-1-95ghz-octa-">SDM660(1.95GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-512">Adreno 512 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SM-G973F/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-g973f">Galaxy S10 SM - G973F< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 03 / 06 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1440 * 3040 < / td >
<td><a href = "/en/testkit/devicelist/exynos-9-octa-9820-2-7ghz-2-3ghz-1-9ghz-octa-">Exynos 9 Octa 9820 (2.7GHz & amp; 2.3GHz & amp; 1.9GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/mali-g76-mp12">Mali - G76 MP12< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/kt">KT< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SM-G975N/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-g975n">Galaxy S10 + SM - G975N< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 03 / 06 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1440 * 3040 < / td >
<td><a href = "/en/testkit/devicelist/exynos-9-octa-9820-2-7ghz-2-3ghz-1-9ghz-octa-">Exynos 9 Octa 9820 (2.7GHz & amp; 2.3GHz & amp; 1.9GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/mali-g76-mp12">Mali - G76 MP12< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/kt">KT< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SM-G970N/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-g970n">Galaxy S10e SM - G970N< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 03 / 06 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2280 < / td >
<td><a href = "/en/testkit/devicelist/exynos-9-octa-9820-2-7ghz-2-3ghz-1-9ghz-octa-">Exynos 9 Octa 9820 (2.7GHz & amp; 2.3GHz & amp; 1.9GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/mali-g76-mp12">Mali - G76 MP12< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/lg-u-">LG U + < / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SM-G973N/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-g973n">Galaxy S10 SM - G973N< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 02 / 20 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1440 * 3040 < / td >
<td><a href = "/en/testkit/devicelist/exynos-9820-octa-8-nm-emea">Exynos 9820 Octa(8 nm) - EMEA< / a>< / td>
<td><a href = "/en/testkit/devicelist/mali-g76-mp12-emea">Mali - G76 MP12 - EMEA< / a>< / td>
<td>KR< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/F-01L/device_mini.png"><span><a href = "/en/testkit/devicelist/f-01l">Raku - Raku SMART PHONE me F - 01L < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 02 / 15 < / td >
<td><a href = "/en/testkit/devicelist/android-8-1">Android 8.1.0 < / a > < / td>
< td>720 * 1280 < / td >
<td><a href = "/en/testkit/devicelist/sdm450-1-8ghz-octa-">SDM450(1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SH-02L/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-02l">AQUOS Keitai SH - 02L < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 02 / 08< / td>
<td><a href = "/en/testkit/devicelist/android-8-1">Android 8.1.0 < / a > < / td>
< td>540 * 960 < / td >
<td><a href = "/en/testkit/devicelist/msm8909-1-1ghz-quad-">MSM8909(1.1GHz - Quad) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-304">Adreno 304 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/KYV45/device_mini.png"><span><a href = "/en/testkit/devicelist/kyv45">URBANO V04 KYV45< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 02 / 08< / td>
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm630-2-2ghz-1-8ghz-octa-">SDM630(2.2GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-508">Adreno 508 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/803SH/device_mini.png"><span><a href = "/en/testkit/devicelist/803sh-2">AQUOS R2 compact 803SH< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 01 / 18 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1080 * 2280 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-8ghz-1-7ghz-octa-">SDM845(2.8GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/803SH/device_mini.png"><span><a href = "/en/testkit/devicelist/803sh">AQUOS R2 compact 803SH< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2019">2019 < / a > / 01 / 18 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2280 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-8ghz-1-7ghz-octa-">SDM845(2.8GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SH-M08/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-m08">AQUOS sense2 SH - M08< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 12 / 27 < / td >
<td><a href = "/en/testkit/devicelist/android-8-1">Android 8.1.0 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm450-1-8ghz-octa-">SDM450(1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/S5-SH/device_mini.png"><span><a href = "/en/testkit/devicelist/s5-sh-2">Android One S5< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 12 / 21 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm450-1-8ghz-octa-">SDM450(1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/S5-SH/device_mini.png"><span><a href = "/en/testkit/devicelist/s5-sh-3">Android One S5< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 12 / 21 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm450-1-8ghz-octa-">SDM450(1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/S5-SH/device_mini.png"><span><a href = "/en/testkit/devicelist/s5-sh">Android One S5< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 12 / 21 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm450-1-8ghz-octa-">SDM450(1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-asus">Asus< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/ASUS_X00RD/device_mini.png"><span><a href = "/en/testkit/devicelist/asus_x00rd">ZenFone Live(L1) ZA550KL< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 12 / 21 < / td >
<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
< td>720 * 1440 < / td >
<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-asus">Asus< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/ASUS_X00TDB/device_mini.png"><span><a href = "/en/testkit/devicelist/asus_x00tdb">ZenFone Max Pro(M1) ZB602KL< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 12 / 21 < / td >
<td><a href = "/en/testkit/devicelist/android-8-1">Android 8.1.0 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm636-1-8ghz-1-6ghz-octa-">SDM636(1.8GHz & amp; 1.6GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-509">Adreno 509 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SH-01L/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-01l-2">AQUOS sense2 SH - 01L < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 12 / 14 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm450-1-8ghz-octa-">SDM450(1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SH-01L/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-01l">AQUOS sense2 SH - 01L < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 12 / 14 < / td >
<td><a href = "/en/testkit/devicelist/android-8-1">Android 8.1.0 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm450-1-8ghz-octa-">SDM450(1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SH-01L/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-01l-3">AQUOS sense2 SH - 01L < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 12 / 14 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm450-1-8ghz-octa-">SDM450(1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/y-mobile">Y!mobile< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/X5-LG/device_mini.png"><span><a href = "/en/testkit/devicelist/x5-lg-2">Android One X5< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 12 / 13 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1440 * 3120 < / td >
<td><a href = "/en/testkit/devicelist/msm8998-2-45ghz-1-9ghz-octa-">MSM8998(2.45GHz & amp; 1.9GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/y-mobile">Y!mobile< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/X5-LG/device_mini.png"><span><a href = "/en/testkit/devicelist/x5-lg">Android One X5< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 12 / 13 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1440 * 3120 < / td >
<td><a href = "/en/testkit/devicelist/msm8998-2-45ghz-1-9ghz-octa-">MSM8998(2.45GHz & amp; 1.9GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/KYX31/device_mini.png"><span><a href = "/en/testkit/devicelist/kyx31">INFOBAR xv KYX31< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 11 / 29 < / td >
<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1.1 < / a > < / td>
< td>480 * 800 < / td >
<td><a href = "/en/testkit/devicelist/msm8909-1-1ghz-quad-">MSM8909(1.1GHz - Quad) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-304">Adreno 304 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SHV43/device_mini.png"><span><a href = "/en/testkit/devicelist/shv43">AQUOS sense2 SHV43< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 11 / 09< / td>
<td><a href = "/en/testkit/devicelist/android-8-1">Android 8.1.0 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm450-1-8ghz-octa-">SDM450(1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SHV43/device_mini.png"><span><a href = "/en/testkit/devicelist/shv43-3">AQUOS sense2 SHV43< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 11 / 09< / td>
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm450-1-8ghz-octa-">SDM450(1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SC-02L/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-02l-2">Galaxy Feel2 SC - 02L < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 11 / 09< / td>
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>720 * 1480 < / td >
<td><a href = "/en/testkit/devicelist/exynos-7-octa-7885-2-2ghz-1-6ghz-octa-">Exynos 7 Octa 7885 (2.2GHz & amp; 1.6GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/mali-g71-mp2">Mali - G71 MP2< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SC-02L/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-02l">Galaxy Feel2 SC - 02L < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 11 / 09< / td>
<td><a href = "/en/testkit/devicelist/android-8-1">Android 8.1.0 < / a > < / td>
< td>720 * 1480 < / td >
<td><a href = "/en/testkit/devicelist/exynos-7-octa-7885-2-2ghz-1-6ghz-octa-">Exynos 7 Octa 7885 (2.2GHz & amp; 1.6GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/mali-g71-mp2">Mali - G71 MP2< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SC-02L/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-02l-3">Galaxy Feel2 SC - 02L < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 11 / 09< / td>
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>720 * 1480 < / td >
<td><a href = "/en/testkit/devicelist/exynos-7-octa-7885-2-2ghz-1-6ghz-octa-">Exynos 7 Octa 7885 (2.2GHz & amp; 1.6GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/mali-g71-mp2">Mali - G71 MP2< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/LGV36/device_mini.png"><span><a href = "/en/testkit/devicelist/lgv36">it LGV36< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 11 / 09< / td>
<td><a href = "/en/testkit/devicelist/android-8-1">Android 8.1.0 < / a > < / td>
< td>720 * 1280 < / td >
<td><a href = "/en/testkit/devicelist/msm8917-1-4ghz-quad-">MSM8917(1.4GHz - Quad) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-308">Adreno 308 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SO-01L/device_mini.png"><span><a href = "/en/testkit/devicelist/so-01l">Xperia XZ3 SO - 01L < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 11 / 09< / td>
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1440 * 2880 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-8ghz-1-8ghz-octa-">SDM845(2.8GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SO-01L/device_mini.png"><span><a href = "/en/testkit/devicelist/so-01l-2">Xperia XZ3 SO - 01L < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 11 / 09< / td>
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1440 * 2880 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-8ghz-1-8ghz-octa-">SDM845(2.8GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SOV39/device_mini.png"><span><a href = "/en/testkit/devicelist/sov39">Xperia XZ3 SOV39< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 11 / 09< / td>
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1440 * 2880 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-8ghz-1-8ghz-octa-">SDM845(2.8GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPad Pro 11/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_pro_11-5">iPad Pro 11 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 11 / 07 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-5">iOS 13.5 < / a > < / td>
< td>1668 * 2388 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12x-bionic-2-5ghz-octa-">Apple A12X Bionic(2.5GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12x">Apple A12X< / a>< / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPad Pro 11/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_pro_11-3">iPad Pro 11 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 11 / 07 < / td >
<td><a href = "/en/testkit/devicelist/ios-12-4-1">iOS 12.4.1 < / a > < / td>
< td>1668 * 2388 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12x-bionic-2-5ghz-octa-">Apple A12X Bionic(2.5GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12x">Apple A12X< / a>< / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPad Pro 11/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_pro_11-6">iPad Pro 11 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 11 / 07 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-5">iOS 13.5 < / a > < / td>
< td>1668 * 2388 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12x-bionic-2-5ghz-octa-">Apple A12X Bionic(2.5GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12x">Apple A12X< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPad Pro 11/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_pro_11-4">iPad Pro 11 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 11 / 07 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-1">iOS 13.1 < / a > < / td>
< td>1668 * 2388 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12x-bionic-2-5ghz-octa-">Apple A12X Bionic(2.5GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12x">Apple A12X< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPad Pro 11/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_pro_11-2">iPad Pro 11 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 11 / 07 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-3">iOS 13.3 < / a > < / td>
< td>1668 * 2388 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12x-bionic-2-5ghz-octa-">Apple A12X Bionic(2.5GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12x">Apple A12X< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPad Pro 11/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_pro_11">iPad Pro 11 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 11 / 07 < / td >
<td><a href = "/en/testkit/devicelist/ios-12-1">iOS 12.1 < / a > < / td>
< td>1668 * 2388 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12x-bionic-2-5ghz-octa-">Apple A12X Bionic(2.5GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12x">Apple A12X< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPad Pro 3G 12.9/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_pro_3g_129">iPad Pro 3G 12.9 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 11 / 07 < / td >
<td><a href = "/en/testkit/devicelist/ios-12-1">iOS 12.1 < / a > < / td>
< td>2048 * 2732 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12x-bionic-2-5ghz-octa-">Apple A12X Bionic(2.5GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12x">Apple A12X< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 3/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_3-5">Pixel 3 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 11 / 01 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-5ghz-1-6ghz-octa-">SDM845(2.5GHz & amp; 1.6GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 3/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_3-2">Pixel 3 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 11 / 01 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-5ghz-1-6ghz-octa-">SDM845(2.5GHz & amp; 1.6GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 3/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_3-4">Pixel 3 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 11 / 01 < / td >
<td><a href = "/en/testkit/devicelist/android-11">Android 11 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-5ghz-1-6ghz-octa-">SDM845(2.5GHz & amp; 1.6GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 3/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_3-7">Pixel 3 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 11 / 01 < / td >
<td><a href = "/en/testkit/devicelist/android-11">Android 11 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-5ghz-1-6ghz-octa-">SDM845(2.5GHz & amp; 1.6GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 3/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_3-3">Pixel 3 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 11 / 01 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-5ghz-1-6ghz-octa-">SDM845(2.5GHz & amp; 1.6GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 3/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_3-6">Pixel 3 < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 11 / 01 < / td >
<td><a href = "/en/testkit/devicelist/android-11">Android 11 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-5ghz-1-6ghz-octa-">SDM845(2.5GHz & amp; 1.6GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 3 XL/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_3_xl-7">Pixel 3 XL< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 11 / 01 < / td >
<td><a href = "/en/testkit/devicelist/android-11">Android 11 < / a > < / td>
< td>1440 * 2960 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-5ghz-1-6ghz-octa-">SDM845(2.5GHz & amp; 1.6GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 3 XL/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_3_xl-6">Pixel 3 XL< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 11 / 01 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1440 * 2960 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-5ghz-1-6ghz-octa-">SDM845(2.5GHz & amp; 1.6GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 3 XL/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_3_xl-4">Pixel 3 XL< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 11 / 01 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1440 * 2960 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-5ghz-1-6ghz-octa-">SDM845(2.5GHz & amp; 1.6GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/Pixel 3 XL/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_3_xl-3">Pixel 3 XL< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 11 / 01 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1440 * 2960 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-5ghz-1-6ghz-octa-">SDM845(2.5GHz & amp; 1.6GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-panasonic">Panasonic< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/P-01K/device_mini.png"><span><a href = "/en/testkit/devicelist/p-01k">TOUGHBOOK P - 01K< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 10 / 29 < / td >
<td><a href = "/en/testkit/devicelist/android-8-1">Android 8.1.0 < / a > < / td>
< td>720 * 1280 < / td >
<td><a href = "/en/testkit/devicelist/msm8909-1-1ghz-quad-">MSM8909(1.1GHz - Quad) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-304">Adreno 304 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone XR/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_xr-5">iPhone XR< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 10 / 26 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-0">iOS 13.0 < / a > < / td>
< td>828 * 1792 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>KR< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone XR/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_xr-10">iPhone XR< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 10 / 26 < / td >
<td><a href = "/en/testkit/devicelist/ios-14-0">iOS 14.0 < / a > < / td>
< td>828 * 1792 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone XR/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_xr-6">iPhone XR< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 10 / 26 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-0">iOS 13.0 < / a > < / td>
< td>828 * 1792 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone XR/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_xr-9">iPhone XR< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 10 / 26 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-5">iOS 13.5 < / a > < / td>
< td>828 * 1792 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone XR/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_xr-2">iPhone XR< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 10 / 26 < / td >
<td><a href = "/en/testkit/devicelist/ios-12-0">iOS 12.0 < / a > < / td>
< td>828 * 1792 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone XR/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_xr-3">iPhone XR< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 10 / 26 < / td >
<td><a href = "/en/testkit/devicelist/ios-12-4">iOS 12.4 < / a > < / td>
< td>828 * 1792 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone XR/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_xr-8">iPhone XR< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 10 / 26 < / td >
<td><a href = "/en/testkit/devicelist/ios-14-3">iOS 14.3 < / a > < / td>
< td>828 * 1792 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/t-mobile">T - Mobile< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone XR/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_xr">iPhone XR< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 10 / 26 < / td >
<td><a href = "/en/testkit/devicelist/ios-12-0-1">iOS 12.0.1 < / a > < / td>
< td>828 * 1792 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SC-01L/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-01l">Galaxy Note9 SC - 01L < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 10 / 25 < / td >
<td><a href = "/en/testkit/devicelist/android-8-1">Android 8.1.0 < / a > < / td>
< td>1440 * 2960 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-8ghz-1-7ghz-octa-">SDM845(2.8GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SC-01L/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-01l-2">Galaxy Note9 SC - 01L < / a > < / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 10 / 25 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1440 * 2960 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-8ghz-1-7ghz-octa-">SDM845(2.8GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SCV40/device_mini.png"><span><a href = "/en/testkit/devicelist/scv40">Galaxy Note9 SCV40< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 10 / 25 < / td >
<td><a href = "/en/testkit/devicelist/android-8-1">Android 8.1.0 < / a > < / td>
< td>1440 * 2960 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-8ghz-1-7ghz-octa-">SDM845(2.8GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/lg-u-">LG U + < / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SM-A920N/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-a920n">Galaxy A9 SM - A920N< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 10 / 15 < / td >
<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
< td>1080 * 2220 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-660-octa-core-4x2-2-ghz-kryo-260-4x1-8-ghz-kryo-260-">Snapdragon 660 Octa - core(4x2.2 GHz Kryo 260 & amp; 4x1.8 GHz Kryo 260) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-512">Adreno 512 < / a > < / td>
<td>KR< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone XS/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_xs-3">iPhone XS< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 09 / 21 < / td >
<td><a href = "/en/testkit/devicelist/ios-12-1-1">iOS 12.1.1 < / a > < / td>
< td>1125 * 2436 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>KR< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone XS/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_xs-6">iPhone XS< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 09 / 21 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-0">iOS 13.0 < / a > < / td>
< td>1125 * 2436 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone XS/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_xs">iPhone XS< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 09 / 21 < / td >
<td><a href = "/en/testkit/devicelist/ios-12-4-1">iOS 12.4.1 < / a > < / td>
< td>1125 * 2436 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone XS/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_xs-2">iPhone XS< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 09 / 21 < / td >
<td><a href = "/en/testkit/devicelist/ios-12-0">iOS 12.0 < / a > < / td>
< td>1125 * 2436 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone XS/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_xs-10">iPhone XS< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 09 / 21 < / td >
<td><a href = "/en/testkit/devicelist/ios-14-0">iOS 14.0 < / a > < / td>
< td>1125 * 2436 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone XS/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_xs-5">iPhone XS< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 09 / 21 < / td >
<td><a href = "/en/testkit/devicelist/ios-12-1-2">iOS 12.1.2 < / a > < / td>
< td>1125 * 2436 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone XS/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_xs-4">iPhone XS< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 09 / 21 < / td >
<td><a href = "/en/testkit/devicelist/ios-12-0">iOS 12.0 < / a > < / td>
< td>1125 * 2436 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone XS Max/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_xs_max-7">iPhone XS Max< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 09 / 21 < / td >
<td><a href = "/en/testkit/devicelist/ios-12-4-1">iOS 12.4.1 < / a > < / td>
< td>1242 * 2688 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone XS Max/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_xs_max-12">iPhone XS Max< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 09 / 21 < / td >
<td><a href = "/en/testkit/devicelist/ios-14-0">iOS 14.0 < / a > < / td>
< td>1242 * 2688 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone XS Max/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_xs_max-4">iPhone XS Max< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 09 / 21 < / td >
<td><a href = "/en/testkit/devicelist/ios-12-1-2">iOS 12.1.2 < / a > < / td>
< td>1242 * 2688 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone XS Max/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_xs_max-8">iPhone XS Max< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 09 / 21 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-0">iOS 13.0 < / a > < / td>
< td>1242 * 2688 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone XS Max/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_xs_max-2">iPhone XS Max< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 09 / 21 < / td >
<td><a href = "/en/testkit/devicelist/ios-12-1-2">iOS 12.1.2 < / a > < / td>
< td>1242 * 2688 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone XS Max/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_xs_max-11">iPhone XS Max< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 09 / 21 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-5">iOS 13.5 < / a > < / td>
< td>1242 * 2688 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone XS Max/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_xs_max-3">iPhone XS Max< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 09 / 21 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-0">iOS 13.0 < / a > < / td>
< td>1242 * 2688 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>KR< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone XS Max/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_xs_max-10">iPhone XS Max< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 09 / 21 < / td >
<td><a href = "/en/testkit/devicelist/ios-13-6">iOS 13.6 < / a > < / td>
< td>1242 * 2688 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/iPhone XS Max/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_xs_max-6">iPhone XS Max< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 09 / 21 < / td >
<td><a href = "/en/testkit/devicelist/ios-12-1-2">iOS 12.1.2 < / a > < / td>
< td>1242 * 2688 < / td >
<td><a href = "/en/testkit/devicelist/apple-a12-bionic-2-5ghz-hexa-">Apple A12 Bionic(2.5GHz - Hexa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/apple-a12">Apple A12< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-asus">Asus< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/ASUS_X00PD/device_mini.png"><span><a href = "/en/testkit/devicelist/asus_x00pd">ZenFone Max(M1) ZB555KL< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 09 / 21 < / td >
<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
< td>720 * 1440 < / td >
<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/kt">KT< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SM-A750N/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-a750n">Galaxy A7 SM - A750N< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 09 / 13 < / td >
<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
< td>1080 * 2220 < / td >
<td><a href = "/en/testkit/devicelist/exynos-7885-octa-2x2-2-ghz-cortex-a73-6x1-6-ghz-cortex-a53-">Exynos 7885 Octa(2x2.2 GHz Cortex - A73 & amp; 6x1.6 GHz Cortex - A53) < / a > < / td>
<td><a href = "/en/testkit/devicelist/mali-g71">Mali - G71< / a>< / td>
<td>KR< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/lg-u-">LG U + < / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SM-J415N/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-j415n">Galaxy J4 + SM - J415N< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 09 / 12 < / td >
<td><a href = "/en/testkit/devicelist/android-8-1">Android 8.1.0 < / a > < / td>
< td>720 * 1480 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-425-octa-1-4-ghz-cortex-a53-">Snapdragon 425 Octa(1.4 GHz Cortex - A53) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-308">Adreno 308 < / a > < / td>
<td>KR< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SM-N960F/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-n960f">Galaxy Note9 SM - N960F< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 08 / 24 < / td >
<td><a href = "/en/testkit/devicelist/android-8-1">Android 8.1.0 < / a > < / td>
< td>1440 * 2960 < / td >
<td><a href = "/en/testkit/devicelist/exynos-9-octa-9810-2-7ghz-1-7ghz-octa-">Exynos 9 Octa 9810 (2.7GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/mali-g72-mp18">Mali - G72 MP18< / a>< / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SM-T830/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-t830">Galaxy Tab S4 SM - T830< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 08 / 10 < / td >
<td><a href = "/en/testkit/devicelist/android-8-1">Android 8.1.0 < / a > < / td>
< td>1600 * 2560 < / td >
<td><a href = "/en/testkit/devicelist/msm8998-2-35ghz-1-9ghz-octa-">MSM8998(2.35GHz & amp; 1.9GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SOV38/device_mini.png"><span><a href = "/en/testkit/devicelist/sov38">Xperia XZ2 Premium SOV38< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 08 / 10 < / td >
<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
< td>1080 * 1920 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-8ghz-1-8ghz-octa-">SDM845(2.8GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SO-04K/device_mini.png"><span><a href = "/en/testkit/devicelist/so-04k-4">Xperia XZ2 Premium SO - 04K< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 07 / 27 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 1920 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-8ghz-1-8ghz-octa-">SDM845(2.8GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SO-04K/device_mini.png"><span><a href = "/en/testkit/devicelist/so-04k">Xperia XZ2 Premium SO - 04K< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 07 / 27 < / td >
<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
< td>1080 * 1920 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-8ghz-1-8ghz-octa-">SDM845(2.8GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SO-04K/device_mini.png"><span><a href = "/en/testkit/devicelist/so-04k-3">Xperia XZ2 Premium SO - 04K< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 07 / 27 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1080 * 1920 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-8ghz-1-8ghz-octa-">SDM845(2.8GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/704SH/device_mini.png"><span><a href = "/en/testkit/devicelist/704sh">Simple Smartphone 4 704SH< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 07 / 20 < / td >
<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
< td>720 * 1280 < / td >
<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/704KC/device_mini.png"><span><a href = "/en/testkit/devicelist/704kc">DIGNO J 704KC< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 07 / 06 < / td >
<td><a href = "/en/testkit/devicelist/android-8-1">Android 8.1.0 < / a > < / td>
< td>1080 * 1920 < / td >
<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/L-03K/device_mini.png"><span><a href = "/en/testkit/devicelist/l-03k-2">LG style L - 03K< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 06 / 22 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm450-1-8ghz-1-8ghz-octa-">SDM450(1.8GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/L-03K/device_mini.png"><span><a href = "/en/testkit/devicelist/l-03k">LG style L - 03K< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 06 / 22 < / td >
<td><a href = "/en/testkit/devicelist/android-8-1">Android 8.1.0 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm450-1-8ghz-1-8ghz-octa-">SDM450(1.8GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SO-05K/device_mini.png"><span><a href = "/en/testkit/devicelist/so-05k-2">Xperia XZ2 Compact SO - 05K< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 06 / 22 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-8ghz-1-8ghz-octa-">SDM845(2.8GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SO-05K/device_mini.png"><span><a href = "/en/testkit/devicelist/so-05k">Xperia XZ2 Compact SO - 05K< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 06 / 22 < / td >
<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-8ghz-1-8ghz-octa-">SDM845(2.8GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SO-05K/device_mini.png"><span><a href = "/en/testkit/devicelist/so-05k-3">Xperia XZ2 Compact SO - 05K< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 06 / 22 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-8ghz-1-8ghz-octa-">SDM845(2.8GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-asus">Asus< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/ASUS_Z01RD/device_mini.png"><span><a href = "/en/testkit/devicelist/asus_z01rd">ZenFone 5Z ZS620KL< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 06 / 15 < / td >
<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
< td>1080 * 2246 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-8ghz-1-8ghz-octa-">SDM845(2.8GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/skt">SKT< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SM-G885S/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-g885s">Galaxy A8 Star SM - G885S< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 06 / 11 < / td >
<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
< td>1080 * 2220 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-660-octa-core-4x2-2-ghz-kryo-260-4x1-8-ghz-kryo-260-">Snapdragon 660 Octa - core(4x2.2 GHz Kryo 260 & amp; 4x1.8 GHz Kryo 260) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-512">Adreno 512 < / a > < / td>
<td>KR< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/706SH/device_mini.png"><span><a href = "/en/testkit/devicelist/706sh-3">AQUOS R2 706SH< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 06 / 08< / td>
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1440 * 3040 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-6ghz-1-7ghz-octa-">SDM845(2.6GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/706SH/device_mini.png"><span><a href = "/en/testkit/devicelist/706sh">AQUOS R2 706SH< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 06 / 08< / td>
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1440 * 3040 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-6ghz-1-7ghz-octa-">SDM845(2.6GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/706SH/device_mini.png"><span><a href = "/en/testkit/devicelist/706sh-2">AQUOS R2 706SH< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 06 / 08< / td>
<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
< td>1440 * 3040 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-6ghz-1-7ghz-octa-">SDM845(2.6GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SH-03K/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-03k-3">AQUOS R2 SH - 03K< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 06 / 08< / td>
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1440 * 3040 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-6ghz-1-7ghz-octa-">SDM845(2.6GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SH-03K/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-03k">AQUOS R2 SH - 03K< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 06 / 08< / td>
<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
< td>1440 * 3040 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-6ghz-1-7ghz-octa-">SDM845(2.6GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SHV42/device_mini.png"><span><a href = "/en/testkit/devicelist/shv42">AQUOS R2 SHV42< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 06 / 08< / td>
<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
< td>1440 * 3040 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-6ghz-1-7ghz-octa-">SDM845(2.6GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SHV42/device_mini.png"><span><a href = "/en/testkit/devicelist/shv42-2">AQUOS R2 SHV42< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 06 / 08< / td>
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1440 * 3040 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-6ghz-1-7ghz-octa-">SDM845(2.6GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/y-mobile">Y!mobile< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/X4-SH/device_mini.png"><span><a href = "/en/testkit/devicelist/x4-sh-2">Android One X4< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 06 / 07 < / td >
<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm630-2-2ghz-1-8ghz-octa-">SDM630(2.2GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-508">Adreno 508 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/y-mobile">Y!mobile< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/X4-SH/device_mini.png"><span><a href = "/en/testkit/devicelist/x4-sh">Android One X4< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 06 / 07 < / td >
<td><a href = "/en/testkit/devicelist/android-8-1">Android 8.1.0 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm630-2-2ghz-1-8ghz-octa-">SDM630(2.2GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-508">Adreno 508 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/702SO/device_mini.png"><span><a href = "/en/testkit/devicelist/702so">Xperia XZ2 702SO< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 05 / 31 < / td >
<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-8ghz-1-8ghz-octa-">SDM845(2.8GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/H8296/device_mini.png"><span><a href = "/en/testkit/devicelist/h8296">Xperia XZ2 H8296< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 05 / 31 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-8ghz-1-8ghz-octa-">SDM845(2.8GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/H8296/device_mini.png"><span><a href = "/en/testkit/devicelist/h8216">Xperia XZ2 H8296< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 05 / 31 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-8ghz-1-8ghz-octa-">SDM845(2.8GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SO-03K/device_mini.png"><span><a href = "/en/testkit/devicelist/so-03k-2">Xperia XZ2 SO - 03K< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 05 / 31 < / td >
<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-8ghz-1-8ghz-octa-">SDM845(2.8GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SO-03K/device_mini.png"><span><a href = "/en/testkit/devicelist/so-03k">Xperia XZ2 SO - 03K< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 05 / 31 < / td >
<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-8ghz-1-8ghz-octa-">SDM845(2.8GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SOV37/device_mini.png"><span><a href = "/en/testkit/devicelist/sov37">Xperia XZ2 SOV37< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 05 / 31 < / td >
<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-8ghz-1-8ghz-octa-">SDM845(2.8GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/F-04K/device_mini.png"><span><a href = "/en/testkit/devicelist/f-04k-2">arrows Be F - 04K< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 05 / 25 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>720 * 1280 < / td >
<td><a href = "/en/testkit/devicelist/sdm450-1-8ghz-octa-">SDM450(1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/F-04K/device_mini.png"><span><a href = "/en/testkit/devicelist/f-04k">arrows Be F - 04K< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 05 / 25 < / td >
<td><a href = "/en/testkit/devicelist/android-8-1">Android 8.1.0 < / a > < / td>
< td>720 * 1280 < / td >
<td><a href = "/en/testkit/devicelist/sdm450-1-8ghz-octa-">SDM450(1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-motorola">Motorola< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/moto g(6)/device_mini.png"><span><a href = "/en/testkit/devicelist/moto_g6">Moto G6< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 05 / 23 < / td >
<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm450-1-8ghz-octa-">SDM450(1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SC-02K/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-02k-2">Galaxy S9 SC - 02K< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 05 / 18 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1440 * 2960 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-8ghz-1-7ghz-octa-">SDM845(2.8GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SC-02K/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-02k">Galaxy S9 SC - 02K< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 05 / 18 < / td >
<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
< td>1440 * 2960 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-8ghz-1-7ghz-octa-">SDM845(2.8GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SCV38/device_mini.png"><span><a href = "/en/testkit/devicelist/scv38">Galaxy S9 SCV38< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 05 / 18 < / td >
<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
< td>1440 * 2960 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-8ghz-1-7ghz-octa-">SDM845(2.8GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr class = "prem">
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SC-03K/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-03k-2">Galaxy S9 + SC - 03K< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 05 / 18 < / td >
<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
< td>1440 * 2960 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-8ghz-1-7ghz-octa-">SDM845(2.8GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SC-03K/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-03k">Galaxy S9 + SC - 03K< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 05 / 18 < / td >
<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
< td>1440 * 2960 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-8ghz-1-7ghz-octa-">SDM845(2.8GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SCV39/device_mini.png"><span><a href = "/en/testkit/devicelist/scv39">Galaxy S9 + SCV39< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 05 / 18 < / td >
<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
< td>1440 * 2960 < / td >
<td><a href = "/en/testkit/devicelist/sdm845-2-8ghz-1-7ghz-octa-">SDM845(2.8GHz & amp; 1.7GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-asus">Asus< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/ASUS_X00QD/device_mini.png"><span><a href = "/en/testkit/devicelist/asus_x00qd">ZenFone 5 ZE620KL< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 05 / 18 < / td >
<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
< td>1080 * 2246 < / td >
<td><a href = "/en/testkit/devicelist/sdm636-1-8ghz-1-6ghz-octa-">SDM636(1.8GHz & amp; 1.6GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-509">Adreno 509 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-asus">Asus< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/ASUS_X017DA/device_mini.png"><span><a href = "/en/testkit/devicelist/asus_x017da">ZenFone 5Q ZC600KL< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 05 / 18 < / td >
<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
< td>1080 * 2160 < / td >
<td><a href = "/en/testkit/devicelist/sdm630-2-2ghz-1-8ghz-octa-">SDM630(2.2GHz & amp; 1.8GHz - Octa) < / a > < / td>
<td><a href = "/en/testkit/devicelist/adreno-508">Adreno 508 < / a > < / td>
<td>JP< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/skt">SKT< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SM-A600N/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-a600n">Galaxy A6 SM - A600N< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 05 / 01 < / td >
<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
< td>720 * 1480 < / td >
<td><a href = "/en/testkit/devicelist/exynos-7870-octa-octa-core-1-6-ghz-cortex-a53-">Exynos 7870 Octa(Octa - core 1.6 GHz Cortex - A53) < / a > < / td>
<td><a href = "/en/testkit/devicelist/mali-t830-mp1">Mali - T830 MP1< / a>< / td>
<td>KR< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/lg-u-">LG U + < / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/SM-J600L/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-j600l">Galaxy J6 SM - J600L< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 05 / 01 < / td >
<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
< td>720 * 1480 < / td >
<td><a href = "/en/testkit/devicelist/exynos-7870-octa-1-6-ghz-cortex-a53-">Exynos 7870 Octa(1.6 GHz Cortex - A53) < / a > < / td>
<td><a href = "/en/testkit/devicelist/mali-t830-mp1">Mali - T830 MP1< / a>< / td>
<td>KR< / td>
< / tr>
<tr>
<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
<td>
<img src = "/remotetestkit/devicelist/images/LM-G710N/device_mini.png"><span><a href = "/en/testkit/devicelist/lm-g710n">LG G7 ThinQ< / a>< / span>
< / td>
<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 05 / 01 < / td >
<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
< td>1440 * 3120 < / td >
<td><a href = "/en/testkit/devicelist/snapdragon-845-4x2-8-ghz-kryo-385-gold-4x1-7-ghz-kryo-385-silver-">Snapdragon 845((4x2.8 GHz Kryo 385 Gold & amp; 4x1.7 GHz Kryo 385 Silver) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-630">Adreno 630 < / a > < / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-motorola">Motorola< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/moto g(6) play/device_mini.png"><span><a href = "/en/testkit/devicelist/moto_g6_play">moto g6 play XT1922 - 5 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 04 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>720 * 1440 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/at-t">AT & amp; T< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPad 6/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_6-2">iPad 6 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 03 / 31 < / td >
	<td><a href = "/en/testkit/devicelist/ios-11-4">iOS 11.4 < / a > < / td>
	< td>1536 * 2048 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a10-2-3ghz-quad-">Apple A10(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a10">Apple A10< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPad 6/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_6-3">iPad 6 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 03 / 31 < / td >
	<td><a href = "/en/testkit/devicelist/ios-13-1">iOS 13.1 < / a > < / td>
	< td>1536 * 2048 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a10-2-3ghz-quad-">Apple A10(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a10">Apple A10< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYT33/device_mini.png"><span><a href = "/en/testkit/devicelist/kyt33">Qua tab QZ10 KYT33< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 03 / 24 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.2 < / a > < / td>
	< td>1200 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8953-2ghz-octa-">MSM8953(2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/NP703KC/device_mini.png"><span><a href = "/en/testkit/devicelist/np703kc">DIGNO Keitai2 for Biz 703KC< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 03 / 23 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1.1 < / a > < / td>
	< td>480 * 854 < / td >
	<td><a href = "/en/testkit/devicelist/msm8909-1-1ghz-quad-">MSM8909(1.1GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-304">Adreno 304 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/L-02K/device_mini.png"><span><a href = "/en/testkit/devicelist/l-02k">JOJO L - 02K< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 03 / 23 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1440 * 2880 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-45ghz-1-9ghz-octa-">MSM8998(2.45GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/skt">SKT< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SM-N960N/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-n960n">Galaxy Note 9 SM - N960N< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 03 / 11 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-1">Android 8.1.0 < / a > < / td>
	< td>1440 * 2960 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-8910-2-7ghz-quad-1-7ghz-quad-">Exynos 8910 (2.7GHz Quad + 1.7GHz Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-g72-mp18">Mali - G72 MP18< / a>< / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/DM-01K/device_mini.png"><span><a href = "/en/testkit/devicelist/dm-01k">Disney Mobile on docomo DM - 01K< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 02 / 28 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.2 < / a > < / td>
	< td>1080 * 2160 < / td >
	<td><a href = "/en/testkit/devicelist/msm8940-1-4ghz-1-1ghz-octa-">MSM8940(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-03K/device_mini.png"><span><a href = "/en/testkit/devicelist/f-03k">Raku - Raku SMART PHONE me F - 03K< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 02 / 28 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.2 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8953-2ghz-octa-">MSM8953(2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-02K/device_mini.png"><span><a href = "/en/testkit/devicelist/f-02k">arrows Tab F - 02K< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 02 / 23 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>2560 * 1600 < / td >
	<td><a href = "/en/testkit/devicelist/sdm660-2-2ghz-1-8ghz-octa-">SDM660(2.2GHz & amp; 1.8GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-512">Adreno 512 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-02K/device_mini.png"><span><a href = "/en/testkit/devicelist/f-02k-2">arrows Tab F - 02K< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 02 / 23 < / td >
	<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
	< td>2560 * 1600 < / td >
	<td><a href = "/en/testkit/devicelist/sdm660-2-2ghz-1-8ghz-octa-">SDM660(2.2GHz & amp; 1.8GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-512">Adreno 512 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lenovo">Lenovo< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/701LV/device_mini.png"><span><a href = "/en/testkit/devicelist/701lv">Lenovo TAB4 701LV< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 02 / 23 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>1200 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8953-2ghz-octa-">MSM8953(2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYV44/device_mini.png"><span><a href = "/en/testkit/devicelist/kyv44">Qua phone QZ KYV44< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 02 / 23 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYV44/device_mini.png"><span><a href = "/en/testkit/devicelist/kyv44-2">Qua phone QZ KYV44< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 02 / 23 < / td >
	<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/702SH/device_mini.png"><span><a href = "/en/testkit/devicelist/702sh">AQUOS sense basic 702SH< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 02 / 16 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/702SH/device_mini.png"><span><a href = "/en/testkit/devicelist/702sh-2">AQUOS sense basic 702SH< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 02 / 16 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/y-mobile">Y!mobile< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/S4-KC/device_mini.png"><span><a href = "/en/testkit/devicelist/s4-kc">Android One S4< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 02 / 08< / td>
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/y-mobile">Y!mobile< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/S4-KC/device_mini.png"><span><a href = "/en/testkit/devicelist/s4-kc-2">Android One S4< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 02 / 08< / td>
	<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/S3-SH/device_mini.png"><span><a href = "/en/testkit/devicelist/s3-sh-2">Android One S3< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 01 / 26 < / td >
	<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/S3-SH/device_mini.png"><span><a href = "/en/testkit/devicelist/s3-sh-4">Android One S3< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 01 / 26 < / td >
	<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/S3-SH/device_mini.png"><span><a href = "/en/testkit/devicelist/s3-sh-3">Android One S3< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 01 / 26 < / td >
	<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/S3-SH/device_mini.png"><span><a href = "/en/testkit/devicelist/s3-sh">Android One S3< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 01 / 26 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/y-mobile">Y!mobile< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/X3-KC/device_mini.png"><span><a href = "/en/testkit/devicelist/x3-kc">Android One X3< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 01 / 25 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/sdm630-2-2ghz-1-8ghz-octa-">SDM630(2.2GHz & amp; 1.8GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-508">Adreno 508 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/L-01K/device_mini.png"><span><a href = "/en/testkit/devicelist/l-01k-2">V30 + L - 01K< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 01 / 25 < / td >
	<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
	< td>1440 * 2880 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-45ghz-1-9ghz-octa-">MSM8998(2.45GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/L-01K/device_mini.png"><span><a href = "/en/testkit/devicelist/l-01k">V30 + L - 01K< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 01 / 25 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1440 * 2880 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-45ghz-1-9ghz-octa-">MSM8998(2.45GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYV43/device_mini.png"><span><a href = "/en/testkit/devicelist/kyv43">BASIO3 KYV43< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 01 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/NP701KC/device_mini.png"><span><a href = "/en/testkit/devicelist/np701kc">DIGNO Keitai2 701KC< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 01 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1.1 < / a > < / td>
	< td>480 * 854 < / td >
	<td><a href = "/en/testkit/devicelist/msm8909-1-1ghz-quad-">MSM8909(1.1GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-304">Adreno 304 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYT32/device_mini.png"><span><a href = "/en/testkit/devicelist/kyt32">Qua tab QZ8 KYT32< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 01 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.2 < / a > < / td>
	< td>1200 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SM-A730F/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-a730f">Galaxy A8 + (2018) SM - A730F< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2018">2018 < / a > / 01 / 06 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1080 * 2220 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-7-octa-7885-2-2ghz-1-6ghz-octa-">Exynos 7 Octa 7885 (2.2GHz & amp; 1.6GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-g71-mp2">Mali - G71 MP2< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYF37/device_mini.png"><span><a href = "/en/testkit/devicelist/kyf37">GRATINA KYF37< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 12 / 23 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1.1 < / a > < / td>
	< td>480 * 854 < / td >
	<td><a href = "/en/testkit/devicelist/msm8909-1-1ghz-quad-">MSM8909(1.1GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-304">Adreno 304 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/701SH/device_mini.png"><span><a href = "/en/testkit/devicelist/701sh-2">AQUOS R compact 701SH< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 12 / 22 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1080 * 2032 < / td >
	<td><a href = "/en/testkit/devicelist/sdm660-2-2ghz-1-9ghz-octa-">SDM660(2.2GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-512">Adreno 512 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/701SH/device_mini.png"><span><a href = "/en/testkit/devicelist/701sh">AQUOS R compact 701SH< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 12 / 22 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1080 * 2032 < / td >
	<td><a href = "/en/testkit/devicelist/sdm660-2-2ghz-1-9ghz-octa-">SDM660(2.2GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-512">Adreno 512 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHV41/device_mini.png"><span><a href = "/en/testkit/devicelist/shv41-3">AQUOS R compact SHV41< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 12 / 22 < / td >
	<td><a href = "/en/testkit/devicelist/android-10">Android 10 < / a > < / td>
	< td>1080 * 2032 < / td >
	<td><a href = "/en/testkit/devicelist/sdm660-2-2ghz-1-8ghz-octa-">SDM660(2.2GHz & amp; 1.8GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-512">Adreno 512 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHV41/device_mini.png"><span><a href = "/en/testkit/devicelist/shv41-2">AQUOS R compact SHV41< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 12 / 22 < / td >
	<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
	< td>1080 * 2032 < / td >
	<td><a href = "/en/testkit/devicelist/sdm660-2-2ghz-1-8ghz-octa-">SDM660(2.2GHz & amp; 1.8GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-512">Adreno 512 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHV41/device_mini.png"><span><a href = "/en/testkit/devicelist/shv41">AQUOS R compact SHV41< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 12 / 22 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1080 * 2032 < / td >
	<td><a href = "/en/testkit/devicelist/sdm660-2-2ghz-1-8ghz-octa-">SDM660(2.2GHz & amp; 1.8GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-512">Adreno 512 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/LGV35/device_mini.png"><span><a href = "/en/testkit/devicelist/lgv35">isai V30 + LGV35< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 12 / 22 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1440 * 2880 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-45ghz-1-9ghz-octa-">MSM8998(2.45GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHF34/device_mini.png"><span><a href = "/en/testkit/devicelist/shf34">AQUOS K SHF34< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 12 / 15 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1.1 < / a > < / td>
	< td>540 * 960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8909-1-1ghz-quad-">MSM8909(1.1GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-304">Adreno 304 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/skt">SKT< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SM-A530N/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-a530n">Samsung Galaxy A8(2018) < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 12 / 15 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>1080 * 2220 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-7885-octa-core-2x2-2-ghz-cortex-a73-6x1-6-ghz-cortex-a53-">Exynos 7885 Octa - core(2x2.2 GHz Cortex - A73 & amp; 6x1.6 GHz Cortex - A53) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-g71">Mali - G71< / a>< / td>
	<td>KR< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-01K/device_mini.png"><span><a href = "/en/testkit/devicelist/f-01k-2">arrows NX F - 01K< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 12 / 08< / td>
	<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/sdm660-2-2ghz-1-8ghz-octa-">SDM660(2.2GHz & amp; 1.8GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-512">Adreno 512 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-01K/device_mini.png"><span><a href = "/en/testkit/devicelist/f-01k">arrows NX F - 01K< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 12 / 08< / td>
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/sdm660-2-2ghz-1-8ghz-octa-">SDM660(2.2GHz & amp; 1.8GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-512">Adreno 512 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-01K/device_mini.png"><span><a href = "/en/testkit/devicelist/f-01k-3">arrows NX F - 01K< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 12 / 08< / td>
	<td><a href = "/en/testkit/devicelist/android-8-1">Android 8.1.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/sdm660-2-2ghz-1-8ghz-octa-">SDM660(2.2GHz & amp; 1.8GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-512">Adreno 512 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-asus">Asus< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/ASUS_X00HD/device_mini.png"><span><a href = "/en/testkit/devicelist/asus_x00hd">ZenFone 4 Max ZC520KL< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 12 / 08< / td>
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/y-mobile">Y!mobile< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-htc">HTC< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/X2-HT/device_mini.png"><span><a href = "/en/testkit/devicelist/x2-ht">Android One X2< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 12 / 07 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/sdm630-2-2ghz-1-8ghz-octa-">SDM630(2.2GHz & amp; 1.8GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-508">Adreno 508 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-covia">Covia< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/CP-J55aX/device_mini.png"><span><a href = "/en/testkit/devicelist/cp-j55ax">goo g07++ CP - J55aX< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 12 / 04 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/mt6750t-1-5ghz-1ghz-octa-">MT6750T(1.5GHz & amp; 1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t860-mp2">Mali - T860 MP2< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/LG-US998/device_mini.png"><span><a href = "/en/testkit/devicelist/lg-us998">V30 LG - US998< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 12 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.2 < / a > < / td>
	< td>1440 * 2880 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-45ghz-1-9ghz-octa-">MSM8998(2.45GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-02K/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-02k">SH - 02K< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 11 / 27 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1.1 < / a > < / td>
	< td>540 * 960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8909-1-1ghz-quad-">MSM8909(1.1GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-304">Adreno 304 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sprint">Sprint< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SM-G892U/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-g892u">Galaxy S8 Active SM - G892U< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 11 / 17 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1440 * 2960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-35ghz-1-9ghz-octa-">MSM8998(2.35GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-02K/device_mini.png"><span><a href = "/en/testkit/devicelist/so-02k-2">Xperia XZ1 Compact SO - 02K< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 11 / 17 < / td >
	<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-45ghz-1-9ghz-octa-">MSM8998(2.45GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-01K/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-01k">AQUOS sense SH - 01K< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 11 / 10 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-01K/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-01k-3">AQUOS sense SH - 01K< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 11 / 10 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-01K/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-01k-2">AQUOS sense SH - 01K< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 11 / 10 < / td >
	<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/701SO/device_mini.png"><span><a href = "/en/testkit/devicelist/701so-2">Xperia XZ1 701SO< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 11 / 10 < / td >
	<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-45ghz-1-9ghz-octa-">MSM8998(2.45GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/701SO/device_mini.png"><span><a href = "/en/testkit/devicelist/701so">Xperia XZ1 701SO< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 11 / 10 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-45ghz-1-9ghz-octa-">MSM8998(2.45GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-01K/device_mini.png"><span><a href = "/en/testkit/devicelist/so-01k-3">Xperia XZ1 SO - 01K< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 11 / 10 < / td >
	<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-45ghz-1-9ghz-octa-">MSM8998(2.45GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-01K/device_mini.png"><span><a href = "/en/testkit/devicelist/so-01k-5">Xperia XZ1 SO - 01K< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 11 / 10 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-45ghz-1-9ghz-octa-">MSM8998(2.45GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-01K/device_mini.png"><span><a href = "/en/testkit/devicelist/so-01k-4">Xperia XZ1 SO - 01K< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 11 / 10 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-45ghz-1-9ghz-octa-">MSM8998(2.45GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SOV36/device_mini.png"><span><a href = "/en/testkit/devicelist/sov36-3">Xperia XZ1 SOV36< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 11 / 10 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-45ghz-1-9ghz-octa-">MSM8998(2.45GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone X/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_x">iPhone X< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 11 / 03 < / td >
	<td><a href = "/en/testkit/devicelist/ios-11-3">iOS 11.3 < / a > < / td>
	< td>1125 * 2436 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a11-bionic-2-4ghz-hexa-">Apple A11 Bionic(2.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a11">Apple A11< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone X/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_x-5">iPhone X< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 11 / 03 < / td >
	<td><a href = "/en/testkit/devicelist/ios-12-0-1">iOS 12.0.1 < / a > < / td>
	< td>1125 * 2436 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a11-bionic-2-4ghz-hexa-">Apple A11 Bionic(2.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a11">Apple A11< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone X/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_x-9">iPhone X< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 11 / 03 < / td >
	<td><a href = "/en/testkit/devicelist/ios-13-6">iOS 13.6 < / a > < / td>
	< td>1125 * 2436 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a11-bionic-2-4ghz-hexa-">Apple A11 Bionic(2.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a11">Apple A11< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone X/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_x-8">iPhone X< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 11 / 03 < / td >
	<td><a href = "/en/testkit/devicelist/ios-13-4-1">iOS 13.4.1 < / a > < / td>
	< td>1125 * 2436 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a11-bionic-2-4ghz-hexa-">Apple A11 Bionic(2.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a11">Apple A11< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone X/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_x-7">iPhone X< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 11 / 03 < / td >
	<td><a href = "/en/testkit/devicelist/ios-12-1">iOS 12.1 < / a > < / td>
	< td>1125 * 2436 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a11-bionic-2-4ghz-hexa-">Apple A11 Bionic(2.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a11">Apple A11< / a>< / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone X/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_x-12">iPhone X< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 11 / 03 < / td >
	<td><a href = "/en/testkit/devicelist/ios-13-7">iOS 13.7 < / a > < / td>
	< td>1125 * 2436 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a11-bionic-2-4ghz-hexa-">Apple A11 Bionic(2.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a11">Apple A11< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHV40/device_mini.png"><span><a href = "/en/testkit/devicelist/shv40-3">AQUOS sense SHV40< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 11 / 02 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHV40/device_mini.png"><span><a href = "/en/testkit/devicelist/shv40">AQUOS sense SHV40< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 11 / 02 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHV40/device_mini.png"><span><a href = "/en/testkit/devicelist/shv40-2">AQUOS sense SHV40< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 11 / 02 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-htc">HTC< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/HTC_2Q4D100/device_mini.png"><span><a href = "/en/testkit/devicelist/htc_2q4d100">HTC U11 + HTC_2Q4D100< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 11 / 02 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1440 * 2880 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-45ghz-1-9ghz-octa-">MSM8998(2.45GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-motorola">Motorola< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/moto x4/device_mini.png"><span><a href = "/en/testkit/devicelist/moto_x4">Moto X4 XT1900 - 2 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 10 / 27 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/sdm660-2-2ghz-octa-">SDM660(2.2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-512">Adreno 512 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-01K/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-01k-3">Galaxy Note8 SC - 01K< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 10 / 26 < / td >
	<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
	< td>1440 * 2960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-35ghz-1-9ghz-octa-">MSM8998(2.35GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-01K/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-01k">Galaxy Note8 SC - 01K< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 10 / 26 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>1440 * 2960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-35ghz-1-9ghz-octa-">MSM8998(2.35GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-01K/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-01k-2">Galaxy Note8 SC - 01K< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 10 / 26 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1440 * 2960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-35ghz-1-9ghz-octa-">MSM8998(2.35GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SCV37/device_mini.png"><span><a href = "/en/testkit/devicelist/scv37">Galaxy Note8 SCV37< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 10 / 26 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>1440 * 2960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-35ghz-1-9ghz-octa-">MSM8998(2.35GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/Pixel 2/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_2">Pixel 2 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 10 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-35ghz-1-9ghz-octa-">MSM8998(2.35GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/Pixel 2/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_2-2">Pixel 2 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 10 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-35ghz-1-9ghz-octa-">MSM8998(2.35GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/Pixel 2/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_2-4">Pixel 2 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 10 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-35ghz-1-9ghz-octa-">MSM8998(2.35GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/Pixel 2 XL/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_2_xl-2">Pixel 2 XL< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 10 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-1">Android 8.1.0 < / a > < / td>
	< td>1440 * 2880 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-35ghz-1-9ghz-octa-">MSM8998(2.35GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-motorola">Motorola< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/Moto G (5S) Plus/device_mini.png"><span><a href = "/en/testkit/devicelist/moto_g_5s_plus">Moto G5S Plus XT1805< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 10 / 06 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8953-2ghz-octa-">MSM8953(2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-asus">Asus< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/ASUS_Z01KDA/device_mini.png"><span><a href = "/en/testkit/devicelist/asus_z01kda">ZenFone 4 ZE554KL < / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 09 / 23 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/sdm660-2-2ghz-octa-">SDM660(2.2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-512">Adreno 512 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 8/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_8-5">iPhone 8 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 09 / 22 < / td >
	<td><a href = "/en/testkit/devicelist/ios-11-2-6">iOS 11.2.6 < / a > < / td>
	< td>750 * 1334 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a11-bionic-2-4ghz-hexa-">Apple A11 Bionic(2.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a11">Apple A11< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 8/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_8-3">iPhone 8 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 09 / 22 < / td >
	<td><a href = "/en/testkit/devicelist/ios-11-0-1">iOS 11.0.1 < / a > < / td>
	< td>750 * 1334 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a11-bionic-2-4ghz-hexa-">Apple A11 Bionic(2.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a11">Apple A11< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 8/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_8-2">iPhone 8 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 09 / 22 < / td >
	<td><a href = "/en/testkit/devicelist/ios-12-4-1">iOS 12.4.1 < / a > < / td>
	< td>750 * 1334 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a11-bionic-2-4ghz-hexa-">Apple A11 Bionic(2.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a11">Apple A11< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 8/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_8">iPhone 8 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 09 / 22 < / td >
	<td><a href = "/en/testkit/devicelist/ios-14-0-1">iOS 14.0.1 < / a > < / td>
	< td>750 * 1334 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a11-bionic-2-4ghz-hexa-">Apple A11 Bionic(2.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a11">Apple A11< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 8/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_8-4">iPhone 8 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 09 / 22 < / td >
	<td><a href = "/en/testkit/devicelist/ios-12-4-1">iOS 12.4.1 < / a > < / td>
	< td>750 * 1334 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a11-bionic-2-4ghz-hexa-">Apple A11 Bionic(2.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a11">Apple A11< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 8/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_8-9">iPhone 8 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 09 / 22 < / td >
	<td><a href = "/en/testkit/devicelist/ios-13-0">iOS 13.0 < / a > < / td>
	< td>750 * 1334 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a11-bionic-2-4ghz-hexa-">Apple A11 Bionic(2.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a11">Apple A11< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 8/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_8-6">iPhone 8 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 09 / 22 < / td >
	<td><a href = "/en/testkit/devicelist/ios-11-2-6">iOS 11.2.6 < / a > < / td>
	< td>750 * 1334 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a11-bionic-2-4ghz-hexa-">Apple A11 Bionic(2.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a11">Apple A11< / a>< / td>
	<td>KR< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 8 Plus/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_8_plus-4">iPhone 8 Plus< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 09 / 22 < / td >
	<td><a href = "/en/testkit/devicelist/ios-11-0">iOS 11.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a11-bionic-2-4ghz-hexa-">Apple A11 Bionic(2.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a11">Apple A11< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 8 Plus/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_8_plus">iPhone 8 Plus< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 09 / 22 < / td >
	<td><a href = "/en/testkit/devicelist/ios-11-3">iOS 11.3 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a11-bionic-2-4ghz-hexa-">Apple A11 Bionic(2.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a11">Apple A11< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 8 Plus/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_8_plus-6">iPhone 8 Plus< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 09 / 22 < / td >
	<td><a href = "/en/testkit/devicelist/ios-12-1-4">iOS 12.1.4 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a11-bionic-2-4ghz-hexa-">Apple A11 Bionic(2.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a11">Apple A11< / a>< / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 8 Plus/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_8_plus-3">iPhone 8 Plus< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 09 / 22 < / td >
	<td><a href = "/en/testkit/devicelist/ios-11-4-1">iOS 11.4.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a11-bionic-2-4ghz-hexa-">Apple A11 Bionic(2.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a11">Apple A11< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-essential">Essential< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/PH-1/device_mini.png"><span><a href = "/en/testkit/devicelist/ph-1-2">Essential Phone PH - 1 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 08 / 25 < / td >
	<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
	< td>1312 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-45ghz-1-9ghz-octa-">MSM8998(2.45GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYF35/device_mini.png"><span><a href = "/en/testkit/devicelist/kyf35">MARVERA KYF35< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 08 / 10 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1.1 < / a > < / td>
	< td>480 * 854 < / td >
	<td><a href = "/en/testkit/devicelist/msm8909-1-1ghz-quad-">MSM8909(1.1GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-304">Adreno 304 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYF36/device_mini.png"><span><a href = "/en/testkit/devicelist/kyf36">Simple Phone KYF36< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 08 / 10 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1.1 < / a > < / td>
	< td>480 * 854 < / td >
	<td><a href = "/en/testkit/devicelist/msm8909-1-1ghz-quad-">MSM8909(1.1GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-304">Adreno 304 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-crosslink">Crosslink< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/g06/device_mini.png"><span><a href = "/en/testkit/devicelist/g06">goo g06 + < / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 07 / 31 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>480 * 800 < / td >
	<td><a href = "/en/testkit/devicelist/mt6737m-1-1ghz-quad-">MT6737M(1.1GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t720-mp2">Mali - T720 MP2< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/arrowsM04/device_mini.png"><span><a href = "/en/testkit/devicelist/arrowsm04">arrows M04< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 07 / 20 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8916-1-2ghz-quad-">MSM8916(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-306">Adreno 306 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/606SH/device_mini.png"><span><a href = "/en/testkit/devicelist/606sh-2">AQUOS ea 606SH< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 07 / 14 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8952-1-5ghz-1-2ghz-octa-">MSM8952(1.5GHz & amp; 1.2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-405">Adreno 405 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/606SH/device_mini.png"><span><a href = "/en/testkit/devicelist/606sh">AQUOS ea 606SH< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 07 / 14 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8952-1-5ghz-1-2ghz-octa-">MSM8952(1.5GHz & amp; 1.2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-405">Adreno 405 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-htc">HTC< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/HTV33/device_mini.png"><span><a href = "/en/testkit/devicelist/htv33">HTC U11 HTV33< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 07 / 14 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-45ghz-1-9ghz-octa-">MSM8998(2.45GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYV42/device_mini.png"><span><a href = "/en/testkit/devicelist/kyv42">Qua phone QX KYV42< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 07 / 14 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/605SH/device_mini.png"><span><a href = "/en/testkit/devicelist/605sh-2">AQUOS R 605SH< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 07 / 07 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-2ghz-1-9ghz-octa-">MSM8998(2.2GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/605SH/device_mini.png"><span><a href = "/en/testkit/devicelist/605sh">AQUOS R 605SH< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 07 / 07 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-2ghz-1-9ghz-octa-">MSM8998(2.2GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-03J/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-03j-2">AQUOS R SH - 03J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 07 / 07 < / td >
	<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-2ghz-1-9ghz-octa-">MSM8998(2.2GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-03J/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-03j-3">AQUOS R SH - 03J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 07 / 07 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-2ghz-1-9ghz-octa-">MSM8998(2.2GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-03J/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-03j">AQUOS R SH - 03J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 07 / 07 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-2ghz-1-9ghz-octa-">MSM8998(2.2GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHV39/device_mini.png"><span><a href = "/en/testkit/devicelist/shv39-2">AQUOS R SHV39< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 07 / 07 < / td >
	<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-2ghz-1-9ghz-octa-">MSM8998(2.2GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHV39/device_mini.png"><span><a href = "/en/testkit/devicelist/shv39-3">AQUOS R SHV39< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 07 / 07 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-2ghz-1-9ghz-octa-">MSM8998(2.2GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHV39/device_mini.png"><span><a href = "/en/testkit/devicelist/shv39">AQUOS R SHV39< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 07 / 07 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-2ghz-1-9ghz-octa-">MSM8998(2.2GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/602KC/device_mini.png"><span><a href = "/en/testkit/devicelist/602kc">DIGNO G 602KC< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 07 / 07 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8917-1-4ghz-quad-">MSM8917(1.4GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-308">Adreno 308 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/kt">KT< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SM-N935K/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-n935k">Galaxy FE SM - N935K< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 07 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-8-octa-8890-2-3ghz-1-6ghz-octa-">Exynos 8 Octa 8890 (2.3GHz & amp; 1.6GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t880-mp12">Mali - T880 MP12< / a>< / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/y-mobile">Y!mobile< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/X1/device_mini.png"><span><a href = "/en/testkit/devicelist/x1">Android One X1< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 06 / 30 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8940-1-4ghz-1-1ghz-octa-">MSM8940(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYV41/device_mini.png"><span><a href = "/en/testkit/devicelist/kyv41">TORQUE G03 KYV41< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 06 / 30 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8953-2ghz-octa-">MSM8953(2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-motorola">Motorola< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/Moto Z2 Play/device_mini.png"><span><a href = "/en/testkit/devicelist/moto_z2_play">Moto Z2 Play< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 06 / 29 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8953pro-2-2ghz-octa-">MSM8953Pro(2.2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-04J/device_mini.png"><span><a href = "/en/testkit/devicelist/so-04j-2">Xperia XZ Premium SO - 04J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 06 / 16 < / td >
	<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-45ghz-1-9ghz-octa-">MSM8998(2.45GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-04J/device_mini.png"><span><a href = "/en/testkit/devicelist/so-04j-3">Xperia XZ Premium SO - 04J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 06 / 16 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-45ghz-1-9ghz-octa-">MSM8998(2.45GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-04J/device_mini.png"><span><a href = "/en/testkit/devicelist/so-04j">Xperia XZ Premium SO - 04J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 06 / 16 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-45ghz-1-9ghz-octa-">MSM8998(2.45GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-04J/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-04j-2">Galaxy Feel SC - 04J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 06 / 15 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-7-octa-7870-1-6ghz-octa-">Exynos 7 Octa 7870 (1.6GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t830-mp2">Mali - T830 MP2< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-04J/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-04j-3">Galaxy Feel SC - 04J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 06 / 15 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-7-octa-7870-1-6ghz-octa-">Exynos 7 Octa 7870 (1.6GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t830-mp2">Mali - T830 MP2< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-04J/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-04j">Galaxy Feel SC - 04J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 06 / 15 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-7-octa-7870-1-6ghz-octa-">Exynos 7 Octa 7870 (1.6GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t830-mp2">Mali - T830 MP2< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPad Pro 10.5/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_pro_105-2">iPad Pro 10.5 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 06 / 13 < / td >
	<td><a href = "/en/testkit/devicelist/ios-12-4-1">iOS 12.4.1 < / a > < / td>
	< td>1668 * 2224 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a10x-2-4ghz-hexa-">Apple A10X(2.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a10x">Apple A10X< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPad Pro 10.5/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_pro_105-3">iPad Pro 10.5 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 06 / 13 < / td >
	<td><a href = "/en/testkit/devicelist/ios-11-4">iOS 11.4 < / a > < / td>
	< td>1668 * 2224 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a10x-2-4ghz-hexa-">Apple A10X(2.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a10x">Apple A10X< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPad Pro 2G 12.9/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_pro_2g_129-3">iPad Pro 2G 12.9 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 06 / 13 < / td >
	<td><a href = "/en/testkit/devicelist/ios-10-3-3">iOS 10.3.3 < / a > < / td>
	< td>2048 * 2732 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a10x-fusion-2-38ghz-quad-">Apple A10X Fusion(2.38GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a10x-fusion">Apple A10X Fusion< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPad Pro 2G 12.9/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_pro_2g_129">iPad Pro 2G 12.9 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 06 / 13 < / td >
	<td><a href = "/en/testkit/devicelist/ios-12-1-1">iOS 12.1.1 < / a > < / td>
	< td>2048 * 2732 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a10x-fusion-2-38ghz-quad-">Apple A10X Fusion(2.38GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a10x-fusion">Apple A10X Fusion< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPad Pro 2G 12.9/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_pro_2g_129-2">iPad Pro 2G 12.9 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 06 / 13 < / td >
	<td><a href = "/en/testkit/devicelist/ios-11-4">iOS 11.4 < / a > < / td>
	< td>2048 * 2732 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a10x-fusion-2-38ghz-quad-">Apple A10X Fusion(2.38GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a10x-fusion">Apple A10X Fusion< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-02J/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-02j">Galaxy S8 SC - 02J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 06 / 08< / td>
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1440 * 2960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-35ghz-1-9ghz-octa-">MSM8998(2.35GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-02J/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-02j-2">Galaxy S8 SC - 02J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 06 / 08< / td>
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1440 * 2960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-35ghz-1-9ghz-octa-">MSM8998(2.35GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-02J/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-02j-3">Galaxy S8 SC - 02J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 06 / 08< / td>
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1440 * 2960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-35ghz-1-9ghz-octa-">MSM8998(2.35GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SCV36/device_mini.png"><span><a href = "/en/testkit/devicelist/scv36-2">Galaxy S8 SCV36< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 06 / 08< / td>
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1440 * 2960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-35ghz-1-9ghz-octa-">MSM8998(2.35GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SCV36/device_mini.png"><span><a href = "/en/testkit/devicelist/scv36">Galaxy S8 SCV36< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 06 / 08< / td>
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1440 * 2960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-35ghz-1-9ghz-octa-">MSM8998(2.35GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SCV36/device_mini.png"><span><a href = "/en/testkit/devicelist/scv36-3">Galaxy S8 SCV36< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 06 / 08< / td>
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1440 * 2960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-35ghz-1-9ghz-octa-">MSM8998(2.35GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-03J/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-03j">Galaxy S8 + SC - 03J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 06 / 08< / td>
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1440 * 2960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-35ghz-1-9ghz-octa-">MSM8998(2.35GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-03J/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-03j-2">Galaxy S8 + SC - 03J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 06 / 08< / td>
	<td><a href = "/en/testkit/devicelist/android-9">Android 9 < / a > < / td>
	< td>1440 * 2960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-35ghz-1-9ghz-octa-">MSM8998(2.35GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SCV35/device_mini.png"><span><a href = "/en/testkit/devicelist/scv35-2">Galaxy S8 + SCV35< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 06 / 08< / td>
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1440 * 2960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-35ghz-1-9ghz-octa-">MSM8998(2.35GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SCV35/device_mini.png"><span><a href = "/en/testkit/devicelist/scv35">Galaxy S8 + SCV35< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 06 / 08< / td>
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1440 * 2960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-35ghz-1-9ghz-octa-">MSM8998(2.35GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/G8142/device_mini.png"><span><a href = "/en/testkit/devicelist/g8142">Xperia XZ Premium G8142< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 06 / 08< / td>
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8998-2-45ghz-1-9ghz-octa-">MSM8998(2.45GHz & amp; 1.9GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-540">Adreno 540 < / a > < / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-05J/device_mini.png"><span><a href = "/en/testkit/devicelist/f-05j">arrows Be F - 05J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 06 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8916-1-2ghz-quad-">MSM8916(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-306">Adreno 306 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-05J/device_mini.png"><span><a href = "/en/testkit/devicelist/f-05j-2">arrows Be F - 05J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 06 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8916-1-2ghz-quad-">MSM8916(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-306">Adreno 306 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/602SO/device_mini.png"><span><a href = "/en/testkit/devicelist/602so-2">Xperia XZs 602SO< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 05 / 26 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/602SO/device_mini.png"><span><a href = "/en/testkit/devicelist/602so">Xperia XZs 602SO< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 05 / 26 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-03J/device_mini.png"><span><a href = "/en/testkit/devicelist/so-03j-3">Xperia XZs SO - 03J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 05 / 26 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-03J/device_mini.png"><span><a href = "/en/testkit/devicelist/so-03j-2">Xperia XZs SO - 03J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 05 / 26 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-03J/device_mini.png"><span><a href = "/en/testkit/devicelist/so-03j">Xperia XZs SO - 03J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 05 / 26 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SOV35/device_mini.png"><span><a href = "/en/testkit/devicelist/sov35-2">Xperia XZs SOV35< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 05 / 26 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SOV35/device_mini.png"><span><a href = "/en/testkit/devicelist/sov35-3">Xperia XZs SOV35< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 05 / 26 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SOV35/device_mini.png"><span><a href = "/en/testkit/devicelist/sov35">Xperia XZs SOV35< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 05 / 26 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SM-T820/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-t820-2">GALAXY Tab S3 9.7 SM - T820 - Korean< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 05 / 11 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1536 * 2048 < / td >
	<td><a href = "/en/testkit/devicelist/apq8096-2-15ghz-1-6ghz-quad-">APQ8096(2.15GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/lg-u-">LG U + < / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SM-G955N/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-g955n">Galaxy S8 Plus SM - G955N< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 04 / 21 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1440 * 2960 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-9-octa-8895-2-3ghz-1-7ghz-octa-">Exynos 9 Octa 8895 (2.3GHz & amp; 1.7GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-g71-mp20">Mali - G71 MP20< / a>< / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SM-G950F/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-g950f">Galaxy S8 SM - G950F< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 04 / 21 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1440 * 2960 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-9-octa-8895-2-3ghz-1-7ghz-octa-">Exynos 9 Octa 8895 (2.3GHz & amp; 1.7GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-g71-mp20">Mali - G71 MP20< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/skt">SKT< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SM-G950N/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-g950n">Galaxy S8 SM - G950N< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 04 / 21 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1440 * 2960 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-9-octa-8895-2-3ghz-1-7ghz-octa-">Exynos 9 Octa 8895 (2.3GHz & amp; 1.7GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-g71-mp20">Mali - G71 MP20< / a>< / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SM-G955F/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-g955f">Galaxy S8 + SM - G955F< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 04 / 21 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1440 * 2960 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-9-octa-8895-2-3ghz-1-7ghz-octa-">Exynos 9 Octa 8895 (2.3GHz & amp; 1.7GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-g71-mp20">Mali - G71 MP20< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYF34/device_mini.png"><span><a href = "/en/testkit/devicelist/kyf34">GRATINA 4G KYF34< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 04 / 21 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1.1 < / a > < / td>
	< td>480 * 854 < / td >
	<td><a href = "/en/testkit/devicelist/msm8909-1-1ghz-quad-">MSM8909(1.1GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-304">Adreno 304 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-asus">Asus< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/ASUS_X00DDA/device_mini.png"><span><a href = "/en/testkit/devicelist/asus_x00dda">ZenFone 3 Max ZC553KL< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 04 / 15 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-vaio">VAIO< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/VPA051/device_mini.png"><span><a href = "/en/testkit/devicelist/vpa051">VAIO Phone VPA0511S< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 04 / 07 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8952-1-5ghz-1-2ghz-octa-">MSM8952(1.5GHz & amp; 1.2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-405">Adreno 405 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-covia">Covia< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/CP-J55aW/device_mini.png"><span><a href = "/en/testkit/devicelist/cp-j55aw">goo g07 + CP - J55aW< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 03 / 27 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/mt6750t-1-5ghz-1ghz-octa-">MT6750T(1.5GHz & amp; 1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t860-mp2">Mali - T860 MP2< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPad 5/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_5-2">iPad 5 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 03 / 24 < / td >
	<td><a href = "/en/testkit/devicelist/ios-12-0">iOS 12.0 < / a > < / td>
	< td>1536 * 2048 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a9-1-85ghz-dual-">Apple A9(1.85GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a9">Apple A9< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPad 5/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_5-4">iPad 5 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 03 / 24 < / td >
	<td><a href = "/en/testkit/devicelist/ios-10-3">iOS 10.3 < / a > < / td>
	< td>1536 * 2048 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a9-1-85ghz-dual-">Apple A9(1.85GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a9">Apple A9< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/y-mobile">Y!mobile< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/S2/device_mini.png"><span><a href = "/en/testkit/devicelist/s2-2">Android One S2< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 03 / 10 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8917-1-4ghz-quad-">MSM8917(1.4GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-308">Adreno 308 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/y-mobile">Y!mobile< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/S2/device_mini.png"><span><a href = "/en/testkit/devicelist/s2">Android One S2< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 03 / 10 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8917-1-4ghz-quad-">MSM8917(1.4GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-308">Adreno 308 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/kt">KT< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/LGM-G600K/device_mini.png"><span><a href = "/en/testkit/devicelist/lgm-g600k">LG G6 LGM - G600K< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 02 / 26 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1440 * 2880 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996pro-2-35ghz-1-6ghz-quad-">MSM8996Pro(2.35GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/y-mobile">Y!mobile< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/S1/device_mini.png"><span><a href = "/en/testkit/devicelist/s1">Android One S1< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 02 / 24 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYV40/device_mini.png"><span><a href = "/en/testkit/devicelist/kyv40">rafre KYV40< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 02 / 24 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYF33/device_mini.png"><span><a href = "/en/testkit/devicelist/kyf33">TORQUE X01 KYF33< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 02 / 24 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1.1 < / a > < / td>
	< td>480 * 854 < / td >
	<td><a href = "/en/testkit/devicelist/msm8909-1-1ghz-quad-">MSM8909(1.1GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-304">Adreno 304 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-04J/device_mini.png"><span><a href = "/en/testkit/devicelist/f-04j">Raku - Raku SMART PHONE 4 F - 04J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 02 / 10 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8953-2ghz-octa-">MSM8953(2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/DM-01J/device_mini.png"><span><a href = "/en/testkit/devicelist/dm-01j">Disney Mobile on docomo DM - 01J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 02 / 09< / td>
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/DM-01J/device_mini.png"><span><a href = "/en/testkit/devicelist/dm-01j-2">Disney Mobile on docomo DM - 01J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 02 / 09< / td>
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHV38/device_mini.png"><span><a href = "/en/testkit/devicelist/shv38">AQUOS SERIE mini SHV38< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 02 / 03 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8952-1-5ghz-1-2ghz-octa-">MSM8952(1.5GHz & amp; 1.2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-405">Adreno 405 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHV38/device_mini.png"><span><a href = "/en/testkit/devicelist/shv38-2">AQUOS SERIE mini SHV38< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 02 / 03 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8952-1-5ghz-1-2ghz-octa-">MSM8952(1.5GHz & amp; 1.2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-405">Adreno 405 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/603SH/device_mini.png"><span><a href = "/en/testkit/devicelist/603sh-2">AQUOS Xx3 mini 603SH< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 02 / 03 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8952-1-5ghz-1-2ghz-octa-">MSM8952(1.5GHz & amp; 1.2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-405">Adreno 405 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/603SH/device_mini.png"><span><a href = "/en/testkit/devicelist/603sh">AQUOS Xx3 mini 603SH< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 02 / 03 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8952-1-5ghz-1-2ghz-octa-">MSM8952(1.5GHz & amp; 1.2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-405">Adreno 405 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/603SH/device_mini.png"><span><a href = "/en/testkit/devicelist/603sh-4">AQUOS Xx3 mini 603SH< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 02 / 03 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8952-1-5ghz-1-2ghz-octa-">MSM8952(1.5GHz & amp; 1.2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-405">Adreno 405 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/603SH/device_mini.png"><span><a href = "/en/testkit/devicelist/603sh-3">AQUOS Xx3 mini 603SH< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 02 / 03 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8952-1-5ghz-1-2ghz-octa-">MSM8952(1.5GHz & amp; 1.2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-405">Adreno 405 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYV39/device_mini.png"><span><a href = "/en/testkit/devicelist/kyv39-2">miraie f KYV39< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 01 / 20 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8917-1-4ghz-quad-">MSM8917(1.4GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-308">Adreno 308 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/kt">KT< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SM-J730K/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-j730k">Samsung Galaxy J7(2017) < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 01 / 15 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-7870-octa-core-1-6-ghz-cortex-a53">Exynos 7870 Octa - core 1.6 GHz Cortex - A53< / a>< / td>
	<td><a href = "/en/testkit/devicelist/mali-t830-mp3">Mali - T830 MP3< / a>< / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-asus">Asus< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/ASUS_X008DB/device_mini.png"><span><a href = "/en/testkit/devicelist/asus_x008db">ZenFone 3 Max ZC520TL< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 01 / 14 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/mt6737m-1-3ghz-quad-">MT6737M(1.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t720-mp2">Mali - T720 MP2< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SM-C9000/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-c9000">Galaxy C9 Pro SM - C9000< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2017">2017 < / a > / 01 / 06 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8976-pro-1-95ghz-1-4ghz-octa-">MSM8976 Pro(1.95GHz & amp; 1.4GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-510">Adreno 510 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-02J/device_mini.png"><span><a href = "/en/testkit/devicelist/f-02j">Raku - Raku PHONE F - 02J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 12 / 14 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1.1 < / a > < / td>
	< td>480 * 854 < / td >
	<td><a href = "/en/testkit/devicelist/msm8916-1-2ghz-quad-">MSM8916(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-306">Adreno 306 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYV38/device_mini.png"><span><a href = "/en/testkit/devicelist/kyv38">URBANO V03 KYV38< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 12 / 09< / td>
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYV38/device_mini.png"><span><a href = "/en/testkit/devicelist/kyv38-2">URBANO V03 KYV38< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 12 / 09< / td>
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-asus">Asus< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/ASUS_A001/device_mini.png"><span><a href = "/en/testkit/devicelist/asus_a001">ZenFone 3 Ultra ZU680KL< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 12 / 09< / td>
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8976-1-8ghz-1-2ghz-octa-">MSM8976(1.8GHz & amp; 1.2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-510">Adreno 510 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-01J/device_mini.png"><span><a href = "/en/testkit/devicelist/f-01j-2">arrows NX F - 01J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 12 / 02 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8953-2ghz-octa-">MSM8953(2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-01J/device_mini.png"><span><a href = "/en/testkit/devicelist/f-01j">arrows NX F - 01J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 12 / 02 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8953-2ghz-octa-">MSM8953(2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-01J/device_mini.png"><span><a href = "/en/testkit/devicelist/f-01j-4">arrows NX F - 01J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 12 / 02 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8953-2ghz-octa-">MSM8953(2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-01J/device_mini.png"><span><a href = "/en/testkit/devicelist/f-01j-3">arrows NX F - 01J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 12 / 02 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8953-2ghz-octa-">MSM8953(2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-asus">Asus< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/ASUS_Z01BDA/device_mini.png"><span><a href = "/en/testkit/devicelist/asus_z01bda">ZenFone 3 Laser ZC551KL< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 11 / 26 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHV37/device_mini.png"><span><a href = "/en/testkit/devicelist/shv37-3">AQUOS U SHV37< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 11 / 18 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHV37/device_mini.png"><span><a href = "/en/testkit/devicelist/shv37-2">AQUOS U SHV37< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 11 / 18 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHV37/device_mini.png"><span><a href = "/en/testkit/devicelist/shv37">AQUOS U SHV37< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 11 / 18 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-02J/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-02j-3">AQUOS EVER SH - 02J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 11 / 04 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-02J/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-02j-2">AQUOS EVER SH - 02J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 11 / 04 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-02J/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-02j">AQUOS EVER SH - 02J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 11 / 04 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-panasonic">Panasonic< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/P-01J/device_mini.png"><span><a href = "/en/testkit/devicelist/p-01j">P - smart Keitai P - 01J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 11 / 04 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1.1 < / a > < / td>
	< td>480 * 854 < / td >
	<td><a href = "/en/testkit/devicelist/msm8909-1-1ghz-quad-">MSM8909(1.1GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-304">Adreno 304 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-02J/device_mini.png"><span><a href = "/en/testkit/devicelist/so-02j-3">Xperia X Compact SO - 02J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 11 / 02 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8956-1-8ghz-1-4ghz-hexa-">MSM8956(1.8GHz & amp; 1.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-510">Adreno 510 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-02J/device_mini.png"><span><a href = "/en/testkit/devicelist/so-02j">Xperia X Compact SO - 02J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 11 / 02 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8956-1-8ghz-1-4ghz-hexa-">MSM8956(1.8GHz & amp; 1.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-510">Adreno 510 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/601SO/device_mini.png"><span><a href = "/en/testkit/devicelist/601so-3">Xperia XZ 601SO< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 11 / 02 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/601SO/device_mini.png"><span><a href = "/en/testkit/devicelist/601so-2">Xperia XZ 601SO< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 11 / 02 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/601SO/device_mini.png"><span><a href = "/en/testkit/devicelist/601so">Xperia XZ 601SO< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 11 / 02 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-01J/device_mini.png"><span><a href = "/en/testkit/devicelist/so-01j">Xperia XZ SO - 01J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 11 / 02 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-01J/device_mini.png"><span><a href = "/en/testkit/devicelist/so-01j-3">Xperia XZ SO - 01J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 11 / 02 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-01J/device_mini.png"><span><a href = "/en/testkit/devicelist/so-01j-2">Xperia XZ SO - 01J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 11 / 02 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-01J/device_mini.png"><span><a href = "/en/testkit/devicelist/so-01j-4">Xperia XZ SO - 01J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 11 / 02 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SOV34/device_mini.png"><span><a href = "/en/testkit/devicelist/sov34-3">Xperia XZ SOV34< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 11 / 02 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SOV34/device_mini.png"><span><a href = "/en/testkit/devicelist/sov34-2">Xperia XZ SOV34< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 11 / 02 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SOV34/device_mini.png"><span><a href = "/en/testkit/devicelist/sov34-4">Xperia XZ SOV34< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 11 / 02 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SOV34/device_mini.png"><span><a href = "/en/testkit/devicelist/sov34">Xperia XZ SOV34< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 11 / 02 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/NP601SH/device_mini.png"><span><a href = "/en/testkit/devicelist/np601sh-2">AQUOS Keitai2 601SH< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 10 / 28 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1.1 < / a > < / td>
	< td>540 * 960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8909-1-1ghz-quad-">MSM8909(1.1GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-304">Adreno 304 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/NP601SH/device_mini.png"><span><a href = "/en/testkit/devicelist/np601sh">AQUOS Keitai2 601SH< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 10 / 28 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1.1 < / a > < / td>
	< td>540 * 960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8909-1-1ghz-quad-">MSM8909(1.1GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-304">Adreno 304 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/t-mobile">T - Mobile< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/LG-H918/device_mini.png"><span><a href = "/en/testkit/devicelist/lg-h918">LG V20 LG - H918< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 10 / 28 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-01J/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-01j-2">AQUOS Keitai SH - 01J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 10 / 21 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1.1 < / a > < / td>
	< td>540 * 960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8909-1-1ghz-quad-">MSM8909(1.1GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-304">Adreno 304 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-01J/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-01j">AQUOS Keitai SH - 01J< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 10 / 21 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1.1 < / a > < / td>
	< td>540 * 960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8909-1-1ghz-quad-">MSM8909(1.1GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-304">Adreno 304 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-asus">Asus< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/ASUS_Z017DA/device_mini.png"><span><a href = "/en/testkit/devicelist/asus_z017da">ZenFone 3 ZE520KL< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 10 / 07 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8953-2ghz-octa-">MSM8953(2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/skt">SKT< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SM-A810S/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-a810s">Galaxy A8(2016) SM - A810S< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 10 / 05 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-7-octa-7420-2-1ghz-1-5ghz-octa-">Exynos 7 Octa 7420 (2.1GHz & amp; 1.5GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t760-mp8">Mali - T760 MP8< / a>< / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-motorola">Motorola< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/XT1635-02/device_mini.png"><span><a href = "/en/testkit/devicelist/xt1635-02">Moto Z Play XT1635 - 02 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 10 / 04 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8953-2ghz-octa-">MSM8953(2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-506">Adreno 506 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F8332/device_mini.png"><span><a href = "/en/testkit/devicelist/f8332">Xperia XZ Dual SIM F8332< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 10 / 02 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/lg-u-">LG U + < / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/LG-F800L/device_mini.png"><span><a href = "/en/testkit/devicelist/lg-f800l">LG V20 F800L< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 09 / 29 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/skt">SKT< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/LG-F800S/device_mini.png"><span><a href = "/en/testkit/devicelist/lg-f800s">LG V20 F800S< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 09 / 29 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/skt">SKT< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-tg-co">TG & amp; Co< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/TG-L900S/device_mini.png"><span><a href = "/en/testkit/devicelist/tg-l900s">LUNA S TG - L900S< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 09 / 29 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8976-1-8ghz-1-4ghz-octa-">MSM8976(1.8GHz & amp; 1.4GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-510">Adreno 510 < / a > < / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 7/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_7-5">iPhone 7 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 09 / 16 < / td >
	<td><a href = "/en/testkit/devicelist/ios-10-3-2">iOS 10.3.2 < / a > < / td>
	< td>750 * 1334 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a10-2-3ghz-quad-">Apple A10(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a10">Apple A10< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 7/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_7-11">iPhone 7 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 09 / 16 < / td >
	<td><a href = "/en/testkit/devicelist/ios-11-2-5">iOS 11.2.5 < / a > < / td>
	< td>750 * 1334 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a10-2-3ghz-quad-">Apple A10(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a10">Apple A10< / a>< / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 7/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_7-2">iPhone 7 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 09 / 16 < / td >
	<td><a href = "/en/testkit/devicelist/ios-12-0">iOS 12.0 < / a > < / td>
	< td>750 * 1334 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a10-2-3ghz-quad-">Apple A10(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a10">Apple A10< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 7/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_7-13">iPhone 7 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 09 / 16 < / td >
	<td><a href = "/en/testkit/devicelist/ios-10-2-1">iOS 10.2.1 < / a > < / td>
	< td>750 * 1334 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a10-2-3ghz-quad-">Apple A10(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a10">Apple A10< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 7 Plus/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_7_plus-7">iPhone 7 Plus< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 09 / 16 < / td >
	<td><a href = "/en/testkit/devicelist/ios-10-3-2">iOS 10.3.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a10-2-3ghz-quad-">Apple A10(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a10">Apple A10< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 7 Plus/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_7_plus-11">iPhone 7 Plus< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 09 / 16 < / td >
	<td><a href = "/en/testkit/devicelist/ios-12-1-1">iOS 12.1.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a10-2-3ghz-quad-">Apple A10(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a10">Apple A10< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 7 Plus/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_7_plus-3">iPhone 7 Plus< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 09 / 16 < / td >
	<td><a href = "/en/testkit/devicelist/ios-10-3-1">iOS 10.3.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a10-2-3ghz-quad-">Apple A10(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a10">Apple A10< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 7 Plus/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_7_plus">iPhone 7 Plus< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 09 / 16 < / td >
	<td><a href = "/en/testkit/devicelist/ios-12-4-1">iOS 12.4.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a10-2-3ghz-quad-">Apple A10(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/apple-a10">Apple A10< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/509SH/device_mini.png"><span><a href = "/en/testkit/devicelist/509sh">Simple Sumaho3 509SH< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 09 / 09< / td>
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8952-1-5ghz-1-2ghz-octa-">MSM8952(1.5GHz & amp; 1.2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-405">Adreno 405 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F5321/device_mini.png"><span><a href = "/en/testkit/devicelist/f5321">Xperia X Compact F5321< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 09 / 08< / td>
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8956-1-8ghz-1-4ghz-hexa-">MSM8956(1.8GHz & amp; 1.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-510">Adreno 510 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHV36/device_mini.png"><span><a href = "/en/testkit/devicelist/shv36">BASIO2 SHV36< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 08 / 05 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8952-1-5ghz-1-2ghz-octa-">MSM8952(1.5GHz & amp; 1.2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-405">Adreno 405 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHV36/device_mini.png"><span><a href = "/en/testkit/devicelist/shv36-2">BASIO2 SHV36< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 08 / 05 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8952-1-5ghz-1-2ghz-octa-">MSM8952(1.5GHz & amp; 1.2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-405">Adreno 405 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-04H/device_mini.png"><span><a href = "/en/testkit/devicelist/f-04h-2">arrows Tab F - 04H< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 07 / 29 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>2560 * 1600 < / td >
	<td><a href = "/en/testkit/devicelist/msm8992-1-8ghz-1-4ghz-hexa-">MSM8992(1.8GHz & amp; 1.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-418">Adreno 418 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-04H/device_mini.png"><span><a href = "/en/testkit/devicelist/f-04h">arrows Tab F - 04H< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 07 / 29 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>2560 * 1600 < / td >
	<td><a href = "/en/testkit/devicelist/msm8992-1-8ghz-1-4ghz-hexa-">MSM8992(1.8GHz & amp; 1.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-418">Adreno 418 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/arrowsM03/device_mini.png"><span><a href = "/en/testkit/devicelist/arrowsm03">arrows M03< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 07 / 28 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8916-1-2ghz-quad-">MSM8916(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-306">Adreno 306 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-M03/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-m03">AQUOS mini SH - M03< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 07 / 20 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8992-1-8ghz-1-4ghz-hexa-">MSM8992(1.8GHz & amp; 1.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-418">Adreno 418 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/DM-02H/device_mini.png"><span><a href = "/en/testkit/devicelist/dm-02h-2">Disney Mobile on docomo DM - 02H< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 07 / 08< / td>
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8937-1-4ghz-1-1ghz-octa-">MSM8937(1.4GHz & amp; 1.1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-505">Adreno 505 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-asus">Asus< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/P00A/device_mini.png"><span><a href = "/en/testkit/devicelist/p00a-2">ZenPad 8.0 Z380M< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 07 / 08< / td>
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>800 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/mt8163-1-3ghz-quad-">MT8163(1.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t720-mp2">Mali - T720 MP2< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-03H/device_mini.png"><span><a href = "/en/testkit/devicelist/f-03h-3">arrows SV F - 03H< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 07 / 06 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8916-1-2ghz-quad-">MSM8916(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-306">Adreno 306 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-03H/device_mini.png"><span><a href = "/en/testkit/devicelist/f-03h-2">arrows SV F - 03H< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 07 / 06 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8916-1-2ghz-quad-">MSM8916(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-306">Adreno 306 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-03H/device_mini.png"><span><a href = "/en/testkit/devicelist/f-03h">arrows SV F - 03H< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 07 / 06 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8916-1-2ghz-quad-">MSM8916(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-306">Adreno 306 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/skt">SKT< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SM-G600S/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-g600s">Galaxy Wide SM - G600S< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 07 / 03 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8916-1-2ghz-quad-">MSM8916(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-306">Adreno 306 < / a > < / td>
	<td>KR< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/LGT31/device_mini.png"><span><a href = "/en/testkit/devicelist/lgt31-2">Qua tab PX LGT31< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 07 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1200 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8952-1-5ghz-1-2ghz-octa-">MSM8952(1.5GHz & amp; 1.2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-405">Adreno 405 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/LGT31/device_mini.png"><span><a href = "/en/testkit/devicelist/lgt31">Qua tab PX LGT31< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 07 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1200 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8952-1-5ghz-1-2ghz-octa-">MSM8952(1.5GHz & amp; 1.2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-405">Adreno 405 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHV35/device_mini.png"><span><a href = "/en/testkit/devicelist/shv35-3">AQUOS U SHV35< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 06 / 24 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8952-1-5ghz-1-2ghz-octa-">MSM8952(1.5GHz & amp; 1.2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-405">Adreno 405 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHV35/device_mini.png"><span><a href = "/en/testkit/devicelist/shv35">AQUOS U SHV35< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 06 / 24 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8952-1-5ghz-1-2ghz-octa-">MSM8952(1.5GHz & amp; 1.2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-405">Adreno 405 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHV35/device_mini.png"><span><a href = "/en/testkit/devicelist/shv35-2">AQUOS U SHV35< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 06 / 24 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8952-1-5ghz-1-2ghz-octa-">MSM8952(1.5GHz & amp; 1.2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-405">Adreno 405 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/503KC/device_mini.png"><span><a href = "/en/testkit/devicelist/503kc">DIGNO F 503KC< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 06 / 24 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8916-1-2ghz-quad-">MSM8916(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-306">Adreno 306 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/503KC/device_mini.png"><span><a href = "/en/testkit/devicelist/503kc-2">DIGNO F 503KC< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 06 / 24 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8916-1-2ghz-quad-">MSM8916(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-306">Adreno 306 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/502SO/device_mini.png"><span><a href = "/en/testkit/devicelist/502so-2">Xperia X Performance 502SO< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 06 / 24 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/502SO/device_mini.png"><span><a href = "/en/testkit/devicelist/502so">Xperia X Performance 502SO< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 06 / 24 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-04H/device_mini.png"><span><a href = "/en/testkit/devicelist/so-04h">Xperia X Performance SO - 04H< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 06 / 24 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-04H/device_mini.png"><span><a href = "/en/testkit/devicelist/so-04h-4">Xperia X Performance SO - 04H< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 06 / 24 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-04H/device_mini.png"><span><a href = "/en/testkit/devicelist/so-04h-3">Xperia X Performance SO - 04H< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 06 / 24 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SOV33/device_mini.png"><span><a href = "/en/testkit/devicelist/sov33">Xperia X Performance SOV33< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 06 / 24 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SOV33/device_mini.png"><span><a href = "/en/testkit/devicelist/sov33-2">Xperia X Performance SOV33< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 06 / 24 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SOV33/device_mini.png"><span><a href = "/en/testkit/devicelist/sov33-3">Xperia X Performance SOV33< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 06 / 24 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHV34/device_mini.png"><span><a href = "/en/testkit/devicelist/shv34">AQUOS SERIE SHV34< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 06 / 10 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHV34/device_mini.png"><span><a href = "/en/testkit/devicelist/shv34-2">AQUOS SERIE SHV34< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 06 / 10 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/506SH/device_mini.png"><span><a href = "/en/testkit/devicelist/506sh">AQUOS Xx3 506SH< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 06 / 10 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/506SH/device_mini.png"><span><a href = "/en/testkit/devicelist/506sh-2">AQUOS Xx3 506SH< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 06 / 10 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-04H/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-04h-2">AQUOS ZETA SH - 04H< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 06 / 10 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-04H/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-04h">AQUOS ZETA SH - 04H< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 06 / 10 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-04H/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-04h-5">AQUOS ZETA SH - 04H< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 06 / 10 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-04H/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-04h-3">AQUOS ZETA SH - 04H< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 06 / 10 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-04H/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-04h-6">AQUOS ZETA SH - 04H< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 06 / 10 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-htc">HTC< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/HTV32/device_mini.png"><span><a href = "/en/testkit/devicelist/htv32-2">HTC 10 HTV32< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 06 / 10 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-htc">HTC< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/HTV32/device_mini.png"><span><a href = "/en/testkit/devicelist/htv32-3">HTC 10 HTV32< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 06 / 10 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F5121/device_mini.png"><span><a href = "/en/testkit/devicelist/f5121">Xperia X F5121< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 05 / 23 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8956-1-8ghz-1-4ghz-hexa-">MSM8956(1.8GHz & amp; 1.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-510">Adreno 510 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-02H/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-02h-2">Galaxy S7 edge SC - 02H< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 05 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-02H/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-02h">Galaxy S7 edge SC - 02H< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 05 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SCV33/device_mini.png"><span><a href = "/en/testkit/devicelist/scv33-4">Galaxy S7 edge SCV33< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 05 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SCV33/device_mini.png"><span><a href = "/en/testkit/devicelist/scv33-3">Galaxy S7 edge SCV33< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 05 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SCV33/device_mini.png"><span><a href = "/en/testkit/devicelist/scv33-2">Galaxy S7 edge SCV33< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 05 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SCV33/device_mini.png"><span><a href = "/en/testkit/devicelist/scv33">Galaxy S7 edge SCV33< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 05 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-1-6ghz-quad-">MSM8996(2.2GHz & amp; 1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/skt">SKT< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SM-J510S/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-j510s">Galaxy J5(2016) SM - J510S< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 04 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8916-1-2ghz-quad-">MSM8916(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-306">Adreno 306 < / a > < / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/lg-u-">LG U + < / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/LG-F700L/device_mini.png"><span><a href = "/en/testkit/devicelist/lg-f700l">LG G5 F700L - Korean< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 04 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/androud-6-0-1">Androud 6.0.1 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8996-2-2ghz-quad-">MSM8996(2.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-530">Adreno 530 < / a > < / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone SE/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_se">iPhone SE< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 03 / 31 < / td >
	<td><a href = "/en/testkit/devicelist/ios-11-1-2">iOS 11.1.2 < / a > < / td>
	< td>640 * 1136 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a9-1-8ghz-dual-">Apple A9(1.8GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gt7600">PowerVR GT7600< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone SE/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_se-3">iPhone SE< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 03 / 31 < / td >
	<td><a href = "/en/testkit/devicelist/ios-10-3-2">iOS 10.3.2 < / a > < / td>
	< td>640 * 1136 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a9-1-8ghz-dual-">Apple A9(1.8GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gt7600">PowerVR GT7600< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-motorola">Motorola< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/XT1562/device_mini.png"><span><a href = "/en/testkit/devicelist/xt1562">Moto X Play XT1562< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 03 / 15 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8939-1-7ghz-1ghz-octa-">MSM8939(1.7GHz & amp; 1GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-405">Adreno 405 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/lg-u-">LG U + < / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SM-N950N/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-n950n">Galaxy Note 8 SM - N950N< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 03 / 11 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>1440 * 2960 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-8-octa-8895-2-3ghz-1-6ghz-octa-">Exynos 8 Octa 8895 (2.3GHz & amp; 1.6GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-g71-mp20">Mali - G71 MP20< / a>< / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SM-G935F/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-g935f">Galaxy S7 edge SM - G935F - English< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 03 / 11 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-8-octa-8890-2-3ghz-1-6ghz-octa-">Exynos 8 Octa 8890 (2.3GHz & amp; 1.6GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t880-mp12">Mali - T880 MP12< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/skt">SKT< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SM-G935S/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-g935s">Galaxy S7 edge SM - G935S - Korean< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 03 / 11 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-8-octa-8890-2-3ghz-1-6ghz-octa-">Exynos 8 Octa 8890 (2.3GHz & amp; 1.6GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t880-mp12">Mali - T880 MP12< / a>< / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SM-G930F/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-g930f">Galaxy S7 SM - G930F - English< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 03 / 11 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-8-octa-8890-2-3ghz-1-6ghz-octa-">Exynos 8 Octa 8890 (2.3GHz & amp; 1.6GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t880-mp12">Mali - T880 MP12< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/kt">KT< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SM-G930K/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-g930k">Galaxy S7 SM - G930K - Korean< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 03 / 11 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-8-octa-8890-2-3ghz-1-6ghz-octa-">Exynos 8 Octa 8890 (2.3GHz & amp; 1.6GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t880-mp12">Mali - T880 MP12< / a>< / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/lg-u-">LG U + < / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SM-G930L/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-g930l">Galaxy S7 SM - G930L - Korean< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 03 / 11 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-8-octa-8890-2-3ghz-1-6ghz-octa-">Exynos 8 Octa 8890 (2.3GHz & amp; 1.6GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t880-mp12">Mali - T880 MP12< / a>< / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/skt">SKT< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SM-G930S/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-g930s">Galaxy S7 SM - G930S - Korean< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 03 / 11 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-8-octa-8890-2-3ghz-1-6ghz-octa-">Exynos 8 Octa 8890 (2.3GHz & amp; 1.6GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t880-mp12">Mali - T880 MP12< / a>< / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYF31/device_mini.png"><span><a href = "/en/testkit/devicelist/kyf31">GRATINA 4G KYF31< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 02 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1.1 < / a > < / td>
	< td>480 * 854 < / td >
	<td><a href = "/en/testkit/devicelist/msm8909-1-1ghz-quad-">MSM8909(1.1GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-304">Adreno 304 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/skt">SKT< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SM-T375S/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-t375s">Galaxy Tab E SM - T375S< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 02 / 13 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>800 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-3-quad-3475-1-3ghz-quad-">Exynos 3 Quad 3475 (1.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t720">Mali - T720< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYV37/device_mini.png"><span><a href = "/en/testkit/devicelist/kyv37">Qua phone KYV37< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 02 / 05 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8916-1-2ghz-quad-">MSM8916(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-306">Adreno 306 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYV37/device_mini.png"><span><a href = "/en/testkit/devicelist/kyv37-2">Qua phone KYV37< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 02 / 05 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8916-1-2ghz-quad-">MSM8916(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-306">Adreno 306 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/DM-01H/device_mini.png"><span><a href = "/en/testkit/devicelist/dm-01h-2">Disney Mobile on docomo DM - 01H< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 01 / 29 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8992-1-8ghz-1-4ghz-hexa-">MSM8992(1.8GHz & amp; 1.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-418">Adreno 418 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHV33/device_mini.png"><span><a href = "/en/testkit/devicelist/shv33">AQUOS SERIE mini SHV33< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 01 / 23 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8992-1-8ghz-1-4ghz-hexa-">MSM8992(1.8GHz & amp; 1.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-418">Adreno 418 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/kt">KT< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SM-A510K/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-a510k">Galaxy A5(2016) SM - A510K< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2016">2016 < / a > / 01 / 14 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-7-octa-7580-1-6ghz-octa-">Exynos 7 Octa 7580 (1.6GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t720-mp2">Mali - T720 MP2< / a>< / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SCV32/device_mini.png"><span><a href = "/en/testkit/devicelist/scv32">Galaxy A8 SCV32< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 12 / 18 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-7-octa-5433-1-9ghz-1-3ghz-octa-">Exynos 7 Octa 5433 (1.9GHz & amp; 1.3GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t760-mp6">Mali - T760 MP6< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYV36/device_mini.png"><span><a href = "/en/testkit/devicelist/kyv36">DIGNO rafre KYV36< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 12 / 11 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8916-1-2ghz-quad-">MSM8916(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-306">Adreno 306 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-google">Google< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/Pixel C/device_mini.png"><span><a href = "/en/testkit/devicelist/pixel_c">Pixel C< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 12 / 08< / td>
	<td><a href = "/en/testkit/devicelist/android-8-0">Android 8.0.0 < / a > < / td>
	< td>2560 * 1800 < / td >
	<td><a href = "/en/testkit/devicelist/tegra-x1-1-9ghz-quad-">Tegra X1(1.9GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/maxwell">Maxwell< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-02H/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-02h-2">AQUOS Compact SH - 02H< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 12 / 04 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8992-1-8ghz-1-4ghz-hexa-">MSM8992(1.8GHz & amp; 1.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-418">Adreno 418 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-02H/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-02h-3">AQUOS Compact SH - 02H< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 12 / 04 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8992-1-8ghz-1-4ghz-hexa-">MSM8992(1.8GHz & amp; 1.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-418">Adreno 418 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-02H/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-02h">AQUOS Compact SH - 02H< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 12 / 04 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8992-1-8ghz-1-4ghz-hexa-">MSM8992(1.8GHz & amp; 1.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-418">Adreno 418 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-02H/device_mini.png"><span><a href = "/en/testkit/devicelist/f-02h">arrows NX F - 02H< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 12 / 04 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8992-1-8ghz-1-4ghz-hexa-">MSM8992(1.8GHz & amp; 1.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-418">Adreno 418 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-freetel">FREETEL< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/FTJ152A/device_mini.png"><span><a href = "/en/testkit/devicelist/ftj152a">Priori3 LTE FTJ152A< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 11 / 20 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1 < / a > < / td>
	< td>480 * 854 < / td >
	<td><a href = "/en/testkit/devicelist/mt6735m-1ghz-quad-">MT6735M(1GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t720-mp2">Mali - T720 MP2< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-03H/device_mini.png"><span><a href = "/en/testkit/devicelist/so-03h-2">Xperia Z5 Premium SO - 03H< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 11 / 20 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8994-2ghz-1-5ghz-octa-">MSM8994(2GHz & amp; 1.5GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-430">Adreno 430 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-03H/device_mini.png"><span><a href = "/en/testkit/devicelist/so-03h">Xperia Z5 Premium SO - 03H< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 11 / 20 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8994-2ghz-1-5ghz-octa-">MSM8994(2GHz & amp; 1.5GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-430">Adreno 430 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-acer">Acer< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/T02/device_mini.png"><span><a href = "/en/testkit/devicelist/t02">Liquid Z530 T02< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 11 / 13 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/mt6735-1-3ghz-quad-">MT6735(1.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t720-mp2">Mali - T720 MP2< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-02H/device_mini.png"><span><a href = "/en/testkit/devicelist/so-02h">Xperia Z5 Compact SO - 02H< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 11 / 13 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8994-2ghz-1-5ghz-octa-">MSM8994(2GHz & amp; 1.5GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-430">Adreno 430 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-02H/device_mini.png"><span><a href = "/en/testkit/devicelist/so-02h-2">Xperia Z5 Compact SO - 02H< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 11 / 13 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8994-2ghz-1-5ghz-octa-">MSM8994(2GHz & amp; 1.5GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-430">Adreno 430 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-01H/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-01h">Galaxy Active neo SC - 01H< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 11 / 12 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1.1 < / a > < / td>
	< td>480 * 800 < / td >
	<td><a href = "/en/testkit/devicelist/msm8916-1-2ghz-quad-">MSM8916(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-306">Adreno 306 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-htc">HTC< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/HTC_A9u/device_mini.png"><span><a href = "/en/testkit/devicelist/htc_a9u">HTC One A9 - English< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 11 / 06 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8952-1-5ghz-1-2ghz-octa-">MSM8952(1.5GHz & amp; 1.2GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-405">Adreno 405 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-01H/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-01h">AQUOS ZETA SH - 01H< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 10 / 29 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8992-1-8ghz-1-4ghz-hexa-">MSM8992(1.8GHz & amp; 1.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-418">Adreno 418 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/M02/device_mini.png"><span><a href = "/en/testkit/devicelist/m02">arrows M02< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 10 / 29 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8916-1-2ghz-quad-">MSM8916(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-306">Adreno 306 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/501SO/device_mini.png"><span><a href = "/en/testkit/devicelist/501so">Xperia Z5 501SO< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 10 / 29 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8994-2ghz-1-5ghz-octa-">MSM8994(2GHz & amp; 1.5GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-430">Adreno 430 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-01H/device_mini.png"><span><a href = "/en/testkit/devicelist/so-01h">Xperia Z5 SO - 01H< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 10 / 29 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8994-2ghz-1-5ghz-octa-">MSM8994(2GHz & amp; 1.5GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-430">Adreno 430 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-01H/device_mini.png"><span><a href = "/en/testkit/devicelist/so-01h-2">Xperia Z5 SO - 01H< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 10 / 29 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8994-2ghz-1-5ghz-octa-">MSM8994(2GHz & amp; 1.5GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-430">Adreno 430 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-01H/device_mini.png"><span><a href = "/en/testkit/devicelist/so-01h-3">Xperia Z5 SO - 01H< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 10 / 29 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8994-2ghz-1-5ghz-octa-">MSM8994(2GHz & amp; 1.5GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-430">Adreno 430 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/Nexus 5X/device_mini.png"><span><a href = "/en/testkit/devicelist/nexus_5x-6">Nexus 5X< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 10 / 22 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-1">Android 8.1.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8992-1-8ghz-1-4ghz-hexa-">MSM8992(1.8GHz & amp; 1.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-418">Adreno 418 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-M02/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-m02-2">AQUOS SH - M02< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 10 / 20 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8926-1-2ghz-quad-">MSM8926(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-305">Adreno 305 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-M02/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-m02">AQUOS SH - M02< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 10 / 20 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8926-1-2ghz-quad-">MSM8926(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-305">Adreno 305 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/Nexus 5X/device_mini.png"><span><a href = "/en/testkit/devicelist/nexus_5x-4">Nexus 5X< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 10 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/android-8-1">Android 8.1.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8992-1-8ghz-1-4ghz-hexa-">MSM8992(1.8GHz & amp; 1.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-418">Adreno 418 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-01H/device_mini.png"><span><a href = "/en/testkit/devicelist/f-01h">arrows Fit F - 01H< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 10 / 07 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8916-1-2ghz-quad-">MSM8916(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-306">Adreno 306 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-freetel">FREETEL< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/FTJ152C/device_mini.png"><span><a href = "/en/testkit/devicelist/ftj152c-2">SAMURAI MIYABI FTJ152C< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 10 / 02 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/mt6735-1-3ghz-quad-">MT6735(1.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t720-mp2">Mali - T720 MP2< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 6s/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_6s-15">iPhone 6s< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 09 / 25 < / td >
	<td><a href = "/en/testkit/devicelist/ios-11-0">iOS 11.0 < / a > < / td>
	< td>750 * 1334 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a9-1-8ghz-dual-">Apple A9(1.8GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gt7600">PowerVR GT7600< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 6s/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_6s-17">iPhone 6s< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 09 / 25 < / td >
	<td><a href = "/en/testkit/devicelist/ios-12-1-4">iOS 12.1.4 < / a > < / td>
	< td>750 * 1334 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a9-1-8ghz-dual-">Apple A9(1.8GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gt7600">PowerVR GT7600< / a>< / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 6s/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_6s-18">iPhone 6s< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 09 / 25 < / td >
	<td><a href = "/en/testkit/devicelist/ios-10-3-1">iOS 10.3.1 < / a > < / td>
	< td>750 * 1334 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a9-1-8ghz-dual-">Apple A9(1.8GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gt7600">PowerVR GT7600< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 6s/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_6s-11">iPhone 6s< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 09 / 25 < / td >
	<td><a href = "/en/testkit/devicelist/ios-12-0">iOS 12.0 < / a > < / td>
	< td>750 * 1334 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a9-1-8ghz-dual-">Apple A9(1.8GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gt7600">PowerVR GT7600< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 6s/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_6s-12">iPhone 6s< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 09 / 25 < / td >
	<td><a href = "/en/testkit/devicelist/ios-9-0-2">iOS 9.0.2 < / a > < / td>
	< td>750 * 1334 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a9-1-8ghz-dual-">Apple A9(1.8GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gt7600">PowerVR GT7600< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 6s/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_6s-4">iPhone 6s< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 09 / 25 < / td >
	<td><a href = "/en/testkit/devicelist/ios-14-0-1">iOS 14.0.1 < / a > < / td>
	< td>750 * 1334 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a9-1-8ghz-dual-">Apple A9(1.8GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gt7600">PowerVR GT7600< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 6s Plus/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_6s_plus-4">iPhone 6s Plus< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 09 / 25 < / td >
	<td><a href = "/en/testkit/devicelist/ios-10-3-2">iOS 10.3.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a9-1-8ghz-dual-">Apple A9(1.8GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gt7600">PowerVR GT7600< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 6s Plus/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_6s_plus-11">iPhone 6s Plus< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 09 / 25 < / td >
	<td><a href = "/en/testkit/devicelist/ios-12-0">iOS 12.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a9-1-8ghz-dual-">Apple A9(1.8GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gt7600">PowerVR GT7600< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 6s Plus/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_6s_plus-13">iPhone 6s Plus< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 09 / 25 < / td >
	<td><a href = "/en/testkit/devicelist/ios-12-0-1">iOS 12.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a9-1-8ghz-dual-">Apple A9(1.8GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gt7600">PowerVR GT7600< / a>< / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 6s Plus/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_6s_plus-12">iPhone 6s Plus< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 09 / 25 < / td >
	<td><a href = "/en/testkit/devicelist/ios-9-0">iOS 9.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a9-1-8ghz-dual-">Apple A9(1.8GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gt7600">PowerVR GT7600< / a>< / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 6s Plus/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_6s_plus-9">iPhone 6s Plus< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 09 / 25 < / td >
	<td><a href = "/en/testkit/devicelist/ios-12-3-1">iOS 12.3.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a9-1-8ghz-dual-">Apple A9(1.8GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gt7600">PowerVR GT7600< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 6s Plus/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_6s_plus-2">iPhone 6s Plus< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 09 / 25 < / td >
	<td><a href = "/en/testkit/devicelist/ios-12-1">iOS 12.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a9-1-8ghz-dual-">Apple A9(1.8GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gt7600">PowerVR GT7600< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 6s Plus/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_6s_plus">iPhone 6s Plus< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 09 / 25 < / td >
	<td><a href = "/en/testkit/devicelist/ios-10-3-3">iOS 10.3.3 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a9-1-8ghz-dual-">Apple A9(1.8GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gt7600">PowerVR GT7600< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/lg-u-">LG U + < / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/LG-F620L/device_mini.png"><span><a href = "/en/testkit/devicelist/lg-f620l">LG Class F620L< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 09 / 22 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8916-1-2ghz-quad-">MSM8916(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-306">Adreno 306 < / a > < / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPad mini 4G/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_mini_4g-4">iPad mini 4G< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 09 / 20 < / td >
	<td><a href = "/en/testkit/devicelist/ios-11-4">iOS 11.4 < / a > < / td>
	< td>1536 * 2048 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a8-1-5ghz-dual-">Apple A8(1.5GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gx6450">PowerVR GX6450< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPad mini 4G/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_mini_4g-7">iPad mini 4G< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 09 / 20 < / td >
	<td><a href = "/en/testkit/devicelist/ios-10-3-3">iOS 10.3.3 < / a > < / td>
	< td>1536 * 2048 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a8-1-5ghz-dual-">Apple A8(1.5GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gx6450">PowerVR GX6450< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPad mini 4G/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_mini_4g-2">iPad mini 4G< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 09 / 20 < / td >
	<td><a href = "/en/testkit/devicelist/ios-12-1">iOS 12.1 < / a > < / td>
	< td>1536 * 2048 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a8-1-5ghz-dual-">Apple A8(1.5GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gx6450">PowerVR GX6450< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPad mini 4G/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_mini_4g-6">iPad mini 4G< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 09 / 20 < / td >
	<td><a href = "/en/testkit/devicelist/ios-12-1-1">iOS 12.1.1 < / a > < / td>
	< td>1536 * 2048 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a8-1-5ghz-dual-">Apple A8(1.5GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gx6450">PowerVR GX6450< / a>< / td>
	<td>KR< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPad mini 4G/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_mini_4g-3">iPad mini 4G< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 09 / 20 < / td >
	<td><a href = "/en/testkit/devicelist/ios-9-0-2">iOS 9.0.2 < / a > < / td>
	< td>1536 * 2048 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a8-1-5ghz-dual-">Apple A8(1.5GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gx6450">PowerVR GX6450< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/skt">SKT< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SM-N920S/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-n920s-2">Galaxy Note5 SM - N920S - Korean< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 08 / 21 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-7-octa-7420-2-1ghz-1-5ghz-octa-">Exynos 7 Octa 7420 (2.1GHz & amp; 1.5GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t760-mp8">Mali - T760 MP8< / a>< / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/kt">KT< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SM-G928K/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-g928k">Galaxy S6 edge + SM - G928K - Korean< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 08 / 20 < / td >
	<td><a href = "/en/testkit/devicelist/androud-6-0-1">Androud 6.0.1 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-7-octa-7420-2-1ghz-1-5ghz-octa-">Exynos 7 Octa 7420 (2.1GHz & amp; 1.5GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t760-mp8">Mali - T760 MP8< / a>< / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYT31/device_mini.png"><span><a href = "/en/testkit/devicelist/kyt31">Qua tab 01 KYT31< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 07 / 24 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1 < / a > < / td>
	< td>1200 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8939-1-5ghz-1-0ghz-octa-">MSM8939(1.5GHz & amp; 1.0GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-405">Adreno 405 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYV34/device_mini.png"><span><a href = "/en/testkit/devicelist/kyv34">URBANO V02< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 07 / 18 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8928-1-4ghz-quad-">MSM8928(1.4GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-305">Adreno 305 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SOT31/device_mini.png"><span><a href = "/en/testkit/devicelist/sot31">Xperia Z4 Tablet SOT31< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 07 / 18 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>2560 * 1600 < / td >
	<td><a href = "/en/testkit/devicelist/msm8994-2ghz-1-5ghz-octa-">MSM8994(2GHz & amp; 1.5GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-430">Adreno 430 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/403SH/device_mini.png"><span><a href = "/en/testkit/devicelist/403sh">AQUOS CRYSTAL 2 403SH< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 07 / 17 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8926-1-2ghz-quad-">MSM8926(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-305">Adreno 305 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHF32/device_mini.png"><span><a href = "/en/testkit/devicelist/shf32">AQUOS K SHF32< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 07 / 17 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.4 < / a > < / td>
	< td>540 * 960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8926-1-2ghz-quad-">MSM8926(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-305">Adreno 305 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-05G/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-05g">AQUOS PAD SH - 05G< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 07 / 17 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>1200 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8994-2ghz-1-5ghz-octa-">MSM8994(2GHz & amp; 1.5GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-430">Adreno 430 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-05G/device_mini.png"><span><a href = "/en/testkit/devicelist/so-05g">Xperia Z4 Tablet SO - 05G< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 07 / 17 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0 < / a > < / td>
	< td>2560 * 1600 < / td >
	<td><a href = "/en/testkit/devicelist/msm8994-2ghz-1-5ghz-octa-">MSM8994(2GHz & amp; 1.5GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-430">Adreno 430 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYV35/device_mini.png"><span><a href = "/en/testkit/devicelist/kyv35">TORQUE G02< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 07 / 16 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8928-1-4ghz-quad-">MSM8928(1.4GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-305">Adreno 305 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KC-01/device_mini.png"><span><a href = "/en/testkit/devicelist/kc-01">KC - 01 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 07 / 10 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.4 < / a > < / td>
	< td>540 * 960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8926-1-2ghz-quad-">MSM8926(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-305">Adreno 305 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-04G/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-04g">AQUOS EVER SH - 04G< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 06 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8926-1-2ghz-quad-">MSM8926(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-305">Adreno 305 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-04G/device_mini.png"><span><a href = "/en/testkit/devicelist/so-04g">Xperia A4 SO - 04G< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 06 / 18 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ac-2-5ghz-quad-">MSM8974AC(2.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/402SO/device_mini.png"><span><a href = "/en/testkit/devicelist/402so">Xperia Z4 402SO< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 06 / 12 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8994-2ghz-1-5ghz-octa-">MSM8994(2GHz & amp; 1.5GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-430">Adreno 430 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SOV31/device_mini.png"><span><a href = "/en/testkit/devicelist/sov31">Xperia Z4 SOV31< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 06 / 11 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8994-2ghz-1-5ghz-octa-">MSM8994(2GHz & amp; 1.5GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-430">Adreno 430 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-03G/device_mini.png"><span><a href = "/en/testkit/devicelist/so-03g">Xperia Z4 SO - 03G< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 06 / 10 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8994-2ghz-1-5ghz-octa-">MSM8994(2GHz & amp; 1.5GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-430">Adreno 430 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-03G/device_mini.png"><span><a href = "/en/testkit/devicelist/so-03g-2">Xperia Z4 SO - 03G< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 06 / 10 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8994-2ghz-1-5ghz-octa-">MSM8994(2GHz & amp; 1.5GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-430">Adreno 430 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHV32/device_mini.png"><span><a href = "/en/testkit/devicelist/shv32">AQUOS SERIE SHV32< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 06 / 05 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8994-2ghz-1-5ghz-octa-">MSM8994(2GHz & amp; 1.5GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-430">Adreno 430 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/at-t">AT & amp; T< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/LG-H810/device_mini.png"><span><a href = "/en/testkit/devicelist/lg-h810">LG G4< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 06 / 05 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8992-1-8ghz-1-4ghz-hexa-">MSM8992(1.8GHz & amp; 1.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-418">Adreno 418 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SGP771/device_mini.png"><span><a href = "/en/testkit/devicelist/sgp771">Xperia Z4 Tablet SGP771 - English< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 06 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>2560 * 1600 < / td >
	<td><a href = "/en/testkit/devicelist/msm8994-2ghz-1-5ghz-octa-">MSM8994(2GHz & amp; 1.5GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-430">Adreno 430 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/DM-01G/device_mini.png"><span><a href = "/en/testkit/devicelist/dm-01g">Disney Mobile on docomo DM - 01G< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 05 / 29 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ac-2-5ghz-quad-">MSM8974AC(2.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/404SC/device_mini.png"><span><a href = "/en/testkit/devicelist/404sc">Galaxy S6 edge 404SC< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 05 / 29 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-7-octa-7420-2-1ghz-1-5ghz-octa-">Exynos 7 Octa 7420 (2.1GHz & amp; 1.5GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t760-mp8">Mali - T760 MP8< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/LGV32/device_mini.png"><span><a href = "/en/testkit/devicelist/lgv32">isai vivid LGV32< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 05 / 29 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8992-1-8ghz-1-4ghz-hexa-">MSM8992(1.8GHz & amp; 1.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-418">Adreno 418 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-03G/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-03g-2">AQUOS ZETA SH - 03G< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 05 / 28 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8994-2ghz-1-5ghz-octa-">MSM8994(2GHz & amp; 1.5GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-430">Adreno 430 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/skt">SKT< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/LG-F500S/device_mini.png"><span><a href = "/en/testkit/devicelist/lg-f500s">LG G4 LG - F500S - Korean< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 04 / 29 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8992-1-8ghz-1-4ghz-hexa-">MSM8992(1.8GHz & amp; 1.4GHz - Hexa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-418">Adreno 418 < / a > < / td>
	<td>KR< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-04G/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-04g-2">Galaxy S6 edge SC - 04G< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 04 / 23 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-7-octa-7420-2-1ghz-1-5ghz-octa-">Exynos 7 Octa 7420 (2.1GHz & amp; 1.5GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t760-mp8">Mali - T760 MP8< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-04G/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-04g">Galaxy S6 edge SC - 04G< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 04 / 23 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-7-octa-7420-2-1ghz-1-5ghz-octa-">Exynos 7 Octa 7420 (2.1GHz & amp; 1.5GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t760-mp8">Mali - T760 MP8< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SCV31/device_mini.png"><span><a href = "/en/testkit/devicelist/scv31">Galaxy S6 edge SCV31< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 04 / 23 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-7-octa-7420-2-1ghz-1-5ghz-octa-">Exynos 7 Octa 7420 (2.1GHz & amp; 1.5GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t760-mp8">Mali - T760 MP8< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-05G/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-05g">Galaxy S6 SC - 05G< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 04 / 23 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-7-octa-7420-2-1ghz-1-5ghz-octa-">Exynos 7 Octa 7420 (2.1GHz & amp; 1.5GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t760-mp8">Mali - T760 MP8< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-05G/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-05g-2">Galaxy S6 SC - 05G< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 04 / 23 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-7-octa-7420-2-1ghz-1-5ghz-octa-">Exynos 7 Octa 7420 (2.1GHz & amp; 1.5GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t760-mp8">Mali - T760 MP8< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/at-t">AT & amp; T< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SAMSUNG-SM-G920A/device_mini.png"><span><a href = "/en/testkit/devicelist/samsung-sm-g920a">Galaxy S6< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 04 / 14 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-7-octa-7420-2-1ghz-1-5ghz-octa-">Exynos 7 Octa 7420 (2.1GHz & amp; 1.5GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t760-mp8">Mali - T760 MP8< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/404KC/device_mini.png"><span><a href = "/en/testkit/devicelist/404kc">DIGNO U 404KC< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 02 / 27 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.4 < / a > < / td>
	< td>540 * 960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8916-1-2ghz-quad-">MSM8916(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-306">Adreno 306 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHF31/device_mini.png"><span><a href = "/en/testkit/devicelist/shf31">AQUOS K SHF31< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 02 / 20 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.4 < / a > < / td>
	< td>540 * 960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8926-1-2ghz-quad-">MSM8926(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-305">Adreno 305 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYV33/device_mini.png"><span><a href = "/en/testkit/devicelist/kyv33">INFOBAR A03< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 02 / 20 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.4 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ab-2-3ghz-quad-">MSM8974AB(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYV32/device_mini.png"><span><a href = "/en/testkit/devicelist/kyv32">BASIO KYV32< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 02 / 13 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.4 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ab-2-3ghz-quad-">MSM8974AB(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYL23/device_mini.png"><span><a href = "/en/testkit/devicelist/kyl23-2">miraie KYL23< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 01 / 30 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.4 < / a > < / td>
	< td>540 * 960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8926-1-2ghz-quad-">MSM8926(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-305">Adreno 305 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYL23/device_mini.png"><span><a href = "/en/testkit/devicelist/kyl23">miraie KYL23< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 01 / 30 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.4 < / a > < / td>
	< td>540 * 960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8926-1-2ghz-quad-">MSM8926(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-305">Adreno 305 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHV31/device_mini.png"><span><a href = "/en/testkit/devicelist/shv31">AQUOS SERIE mini SHV31< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 01 / 29 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.4 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ab-2-3ghz-quad-">MSM8974AB(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHV31/device_mini.png"><span><a href = "/en/testkit/devicelist/shv31-2">AQUOS SERIE mini SHV31< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2015">2015 < / a > / 01 / 29 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.4 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ab-2-3ghz-quad-">MSM8974AB(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/402SH/device_mini.png"><span><a href = "/en/testkit/devicelist/402sh-2">AQUOS CRYSTAL X 402SH< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 12 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.4 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ab-2-3ghz-quad-">MSM8974AB(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/402SH/device_mini.png"><span><a href = "/en/testkit/devicelist/402sh">AQUOS CRYSTAL X 402SH< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 12 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.4 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ab-2-3ghz-quad-">MSM8974AB(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-03G/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-03g-2">GALAXY Tab S 8.4 SC - 03G< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 12 / 12 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>1600 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974-2-3ghz-quad-">MSM8974(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/LGV31/device_mini.png"><span><a href = "/en/testkit/devicelist/lgv31">isai VL LGV31< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 12 / 12 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ac-2-5ghz-quad-">MSM8974AC(2.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/LGV31/device_mini.png"><span><a href = "/en/testkit/devicelist/lgv31-2">isai VL LGV31< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 12 / 12 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ac-2-5ghz-quad-">MSM8974AC(2.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYV31/device_mini.png"><span><a href = "/en/testkit/devicelist/kyv31">URBANO V01 KYV31< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 12 / 12 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.4 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ab-2-3ghz-quad-">MSM8974AB(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYV31/device_mini.png"><span><a href = "/en/testkit/devicelist/kyv31-2">URBANO V01 KYV31< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 12 / 12 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.4 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ab-2-3ghz-quad-">MSM8974AB(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/y-mobile">Y!mobile< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-motorola">Motorola< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/Nexus 6/device_mini.png"><span><a href = "/en/testkit/devicelist/nexus_6-6">Nexus 6 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 12 / 11 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/apq8084-2-7ghz-quad-">APQ8084(2.7GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-420">Adreno 420 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/y-mobile">Y!mobile< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-motorola">Motorola< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/Nexus 6/device_mini.png"><span><a href = "/en/testkit/devicelist/nexus_6-3">Nexus 6 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 12 / 11 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-1">Android 7.1.1 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/apq8084-2-7ghz-quad-">APQ8084(2.7GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-420">Adreno 420 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/y-mobile">Y!mobile< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-motorola">Motorola< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/Nexus 6/device_mini.png"><span><a href = "/en/testkit/devicelist/nexus_6-2">Nexus 6 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 12 / 11 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/apq8084-2-7ghz-quad-">APQ8084(2.7GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-420">Adreno 420 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SCT21/device_mini.png"><span><a href = "/en/testkit/devicelist/sct21">GALAXY Tab S SCT21< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 12 / 04 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.4 < / a > < / td>
	< td>2560 * 1600 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ac-2-5ghz-quad-">MSM8974AC(2.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SCT21/device_mini.png"><span><a href = "/en/testkit/devicelist/sct21-2">GALAXY Tab S SCT21< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 12 / 04 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>2560 * 1600 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ac-2-5ghz-quad-">MSM8974AC(2.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/401SO/device_mini.png"><span><a href = "/en/testkit/devicelist/401so">Xperia Z3 401SO< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 11 / 21 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.4 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ac-2-5ghz-quad-">MSM8974AC(2.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/401SO/device_mini.png"><span><a href = "/en/testkit/devicelist/401so-2">Xperia Z3 401SO< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 11 / 21 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ac-2-5ghz-quad-">MSM8974AC(2.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-02G/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-02g">Disney Mobile on docomo SH - 02G< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 11 / 20 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.4 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ab-2-3ghz-quad-">MSM8974AB(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-02G/device_mini.png"><span><a href = "/en/testkit/devicelist/f-02g">ARROWS NX F - 02G< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 11 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ab-2-3ghz-quad-">MSM8974AB(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-02G/device_mini.png"><span><a href = "/en/testkit/devicelist/f-02g-3">ARROWS NX F - 02G< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 11 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ab-2-3ghz-quad-">MSM8974AB(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-01G/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-01g-2">AQUOS ZETA SH - 01G< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 11 / 14 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ab-2-3ghz-quad-">MSM8974AB(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-01G/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-01g">AQUOS ZETA SH - 01G< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 11 / 14 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.4 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ab-2-3ghz-quad-">MSM8974AB(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sprint">Sprint< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SM-N915P/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-n915p">Galaxy Note Edge - English< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 11 / 14 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.4 < / a > < / td>
	< td>1600 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/apq8084-2-7ghz-quad-">APQ8084(2.7GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-420">Adreno 420 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-02G/device_mini.png"><span><a href = "/en/testkit/devicelist/so-02g-2">Xperia Z3 Compact SO - 02G< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 11 / 12 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ac-2-5ghz-quad-">MSM8974AC(2.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-02G/device_mini.png"><span><a href = "/en/testkit/devicelist/so-02g">Xperia Z3 Compact SO - 02G< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 11 / 12 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ac-2-5ghz-quad-">MSM8974AC(2.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-03G/device_mini.png"><span><a href = "/en/testkit/devicelist/f-03g">ARROWS Tab F - 03G< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 11 / 08< / td>
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.4 < / a > < / td>
	< td>2560 * 1600 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ab-2-3ghz-quad-">MSM8974AB(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-htc">HTC< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/Nexus 9/device_mini.png"><span><a href = "/en/testkit/devicelist/nexus_9-8">Nexus 9 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 11 / 04 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1536 * 2048 < / td >
	<td><a href = "/en/testkit/devicelist/tegra-k1-2-3ghz-dual-">Tegra K1(2.3GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/kepler-dx1">Kepler DX1< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-htc">HTC< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/Nexus 9/device_mini.png"><span><a href = "/en/testkit/devicelist/nexus_9-7">Nexus 9 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 11 / 04 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1536 * 2048 < / td >
	<td><a href = "/en/testkit/devicelist/tegra-k1-2-3ghz-dual-">Tegra K1(2.3GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/kepler-dx1">Kepler DX1< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-htc">HTC< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/Nexus 9/device_mini.png"><span><a href = "/en/testkit/devicelist/nexus_9-6">Nexus 9 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 11 / 04 < / td >
	<td><a href = "/en/testkit/devicelist/android-7-0">Android 7.0 < / a > < / td>
	< td>1536 * 2048 < / td >
	<td><a href = "/en/testkit/devicelist/tegra-k1-2-3ghz-dual-">Tegra K1(2.3GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/kepler-dx1">Kepler DX1< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-htc">HTC< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/Nexus 9/device_mini.png"><span><a href = "/en/testkit/devicelist/nexus_9-2">Nexus 9 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 11 / 04 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0 < / a > < / td>
	< td>1536 * 2048 < / td >
	<td><a href = "/en/testkit/devicelist/tegra-k1-2-3ghz-dual-">Tegra K1(2.3GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/kepler-dx1">Kepler DX1< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-htc">HTC< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/Nexus 9/device_mini.png"><span><a href = "/en/testkit/devicelist/nexus_9">Nexus 9 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 11 / 04 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0 < / a > < / td>
	< td>1536 * 2048 < / td >
	<td><a href = "/en/testkit/devicelist/tegra-k1-2-3ghz-dual-">Tegra K1(2.3GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/kepler-dx1">Kepler DX1< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-htc">HTC< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/Nexus 9/device_mini.png"><span><a href = "/en/testkit/devicelist/nexus_9-4">Nexus 9 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 11 / 04 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1536 * 2048 < / td >
	<td><a href = "/en/testkit/devicelist/tegra-k1-2-3ghz-dual-">Tegra K1(2.3GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/kepler-dx1">Kepler DX1< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPad Air 2/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_air_2-7">iPad Air 2 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 10 / 24 < / td >
	<td><a href = "/en/testkit/devicelist/ios-12-0">iOS 12.0 < / a > < / td>
	< td>1536 * 2048 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a8x-1-5ghz-triple-">Apple A8X(1.5GHz - Triple) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gx6650">PowerVR GX6650< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPad Air 2/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_air_2">iPad Air 2 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 10 / 24 < / td >
	<td><a href = "/en/testkit/devicelist/ios-8-1">iOS 8.1 < / a > < / td>
	< td>1536 * 2048 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a8x-1-5ghz-triple-">Apple A8X(1.5GHz - Triple) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gx6650">PowerVR GX6650< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPad Air 2/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_air_2-6">iPad Air 2 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 10 / 24 < / td >
	<td><a href = "/en/testkit/devicelist/ios-12-4">iOS 12.4 < / a > < / td>
	< td>1536 * 2048 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a8x-1-5ghz-triple-">Apple A8X(1.5GHz - Triple) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gx6650">PowerVR GX6650< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-01G/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-01g-2">GALAXY Note Edge SC - 01G< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 10 / 23 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.1 < / a > < / td>
	< td>1600 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/apq8084-2-7ghz-quad-">APQ8084(2.7GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-420">Adreno 420 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-01G/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-01g">GALAXY Note Edge SC - 01G< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 10 / 23 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.4 < / a > < / td>
	< td>1600 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/apq8084-2-7ghz-quad-">APQ8084(2.7GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-420">Adreno 420 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SCL24/device_mini.png"><span><a href = "/en/testkit/devicelist/scl24">GALAXY Note Edge SCL24< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 10 / 23 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.4 < / a > < / td>
	< td>1600 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/apq8084-2-7ghz-quad-">APQ8084(2.7GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-420">Adreno 420 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SCL24/device_mini.png"><span><a href = "/en/testkit/devicelist/scl24-2">GALAXY Note Edge SCL24< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 10 / 23 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.1 < / a > < / td>
	< td>1600 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/apq8084-2-7ghz-quad-">APQ8084(2.7GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-420">Adreno 420 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-01G/device_mini.png"><span><a href = "/en/testkit/devicelist/so-01g-2">Xperia Z3 SO - 01G< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 10 / 23 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ac-2-5ghz-quad-">MSM8974AC(2.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-01G/device_mini.png"><span><a href = "/en/testkit/devicelist/so-01g">Xperia Z3 SO - 01G< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 10 / 23 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ac-2-5ghz-quad-">MSM8974AC(2.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SOL26/device_mini.png"><span><a href = "/en/testkit/devicelist/sol26-2">Xperia Z3 SOL26< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 10 / 23 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ac-2-5ghz-quad-">MSM8974AC(2.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SOL26/device_mini.png"><span><a href = "/en/testkit/devicelist/sol26">Xperia Z3 SOL26< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 10 / 23 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.4 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ac-2-5ghz-quad-">MSM8974AC(2.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sprint">Sprint< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SM-N910P/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-n910p">Galaxy Note 4 - English< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 10 / 20 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.4 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/apq8084-2-7ghz-quad-">APQ8084(2.7GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-420">Adreno 420 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-02G/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-02g">GALAXY S5 ACTIVE SC - 02G< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 10 / 04 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ac-2-5ghz-quad-">MSM8974AC(2.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/skt">SKT< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SM-N910S/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-n910s-2">Galaxy Note 4 SM - N910S - Korean< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 09 / 26 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1.1 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-5-octa-5433-1-9ghz-1-3ghz-octa-">Exynos 5 Octa 5433 (1.9GHz & amp; 1.3GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t760-mp8">Mali - T760 MP8< / a>< / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/at-t">AT & amp; T< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 6/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_6-2">iPhone 6 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 09 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/ios-8-2">iOS 8.2 < / a > < / td>
	< td>750 * 1334 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a8-1-4ghz-dual-">Apple A8(1.4GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gx6650">PowerVR GX6650< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 6/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_6-7">iPhone 6 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 09 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/ios-8-3">iOS 8.3 < / a > < / td>
	< td>750 * 1334 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a8-1-4ghz-dual-">Apple A8(1.4GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gx6650">PowerVR GX6650< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 6/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_6-8">iPhone 6 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 09 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/ios-8-4">iOS 8.4 < / a > < / td>
	< td>750 * 1334 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a8-1-4ghz-dual-">Apple A8(1.4GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gx6650">PowerVR GX6650< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 6/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_6-9">iPhone 6 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 09 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/ios-8-4">iOS 8.4 < / a > < / td>
	< td>750 * 1334 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a8-1-4ghz-dual-">Apple A8(1.4GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gx6650">PowerVR GX6650< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 6/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_6-17">iPhone 6 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 09 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/ios-8-1-3">iOS 8.1.3 < / a > < / td>
	< td>750 * 1334 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a8-1-4ghz-dual-">Apple A8(1.4GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gx6650">PowerVR GX6650< / a>< / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 6/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_6-16">iPhone 6 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 09 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/ios-12-1">iOS 12.1 < / a > < / td>
	< td>750 * 1334 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a8-1-4ghz-dual-">Apple A8(1.4GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gx6650">PowerVR GX6650< / a>< / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 6/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_6-15">iPhone 6 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 09 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/ios-9-1">iOS 9.1 < / a > < / td>
	< td>750 * 1334 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a8-1-4ghz-dual-">Apple A8(1.4GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gx6650">PowerVR GX6650< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 6/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_6-14">iPhone 6 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 09 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/ios-9-1">iOS 9.1 < / a > < / td>
	< td>750 * 1334 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a8-1-4ghz-dual-">Apple A8(1.4GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gx6650">PowerVR GX6650< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr class = "prem">
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 6 Plus/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_6_plus-4">iPhone 6 Plus< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 09 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/ios-8-1">iOS 8.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a8-1-4ghz-dual-">Apple A8(1.4GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gx6650">PowerVR GX6650< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/at-t">AT & amp; T< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 6 Plus/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_6_plus-2">iPhone 6 Plus< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 09 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/ios-8-3">iOS 8.3 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a8-1-4ghz-dual-">Apple A8(1.4GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gx6650">PowerVR GX6650< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 6 Plus/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_6_plus-8">iPhone 6 Plus< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 09 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/ios-8-3">iOS 8.3 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a8-1-4ghz-dual-">Apple A8(1.4GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gx6650">PowerVR GX6650< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 6 Plus/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_6_plus-9">iPhone 6 Plus< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 09 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/ios-8-4">iOS 8.4 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a8-1-4ghz-dual-">Apple A8(1.4GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gx6650">PowerVR GX6650< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 6 Plus/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_6_plus-15">iPhone 6 Plus< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 09 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/ios-12-1-2">iOS 12.1.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a8-1-4ghz-dual-">Apple A8(1.4GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gx6650">PowerVR GX6650< / a>< / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 6 Plus/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_6_plus-14">iPhone 6 Plus< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 09 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/ios-8-4">iOS 8.4 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a8-1-4ghz-dual-">Apple A8(1.4GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-gx6650">PowerVR GX6650< / a>< / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/D6603/device_mini.png"><span><a href = "/en/testkit/devicelist/d6603">Xperia Z3 - English< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 09 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.4 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ac-2-5ghz-quad-">MSM8974AC(2.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sprint">Sprint< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/LGLS885/device_mini.png"><span><a href = "/en/testkit/devicelist/lgls885">LG G3 Vigor - English< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 09 / 15 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.2 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8926-1-2ghz-quad-">MSM8926(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-305">Adreno 305 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/t-mobile">T - Mobile< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-alcatel">Alcatel< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/ALCATEL ONE TOUCH 4037T/device_mini.png"><span><a href = "/en/testkit/devicelist/alcatel_one_touch_4037t">Alcatel ONETOUCH Evolve 2 - English< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 09 / 12 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.2 < / a > < / td>
	< td>480 * 800 < / td >
	<td><a href = "/en/testkit/devicelist/mt6572-1-3ghz-dual-">MT6572(1.3GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-400-mp">Mali - 400 MP< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sprint">Sprint< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SM-T807P/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-t807p">Galaxy Tab S 10.5 - English< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 09 / 12 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.2 < / a > < / td>
	< td>2560 * 1600 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-5-octa-5420-1-9ghz-1-3ghz-octa-">Exynos 5 Octa 5420 (1.9GHz & amp; 1.3GHz - Octa) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t628-mp6">Mali - T628 MP6< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/305SH/device_mini.png"><span><a href = "/en/testkit/devicelist/305sh">AQUOS CRYSTAL 305SH< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 08 / 29 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.2 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8926-1-2ghz-quad-">MSM8926(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-305">Adreno 305 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/305SH/device_mini.png"><span><a href = "/en/testkit/devicelist/305sh-2">AQUOS CRYSTAL 305SH< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 08 / 29 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.2 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8926-1-2ghz-quad-">MSM8926(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-305">Adreno 305 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-htc">HTC< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/HTL23/device_mini.png"><span><a href = "/en/testkit/devicelist/htl23">HTC J butterfly HTL23< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 08 / 29 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ac-2-5ghz-quad-">MSM8974AC(2.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-htc">HTC< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/HTL23/device_mini.png"><span><a href = "/en/testkit/devicelist/htl23-2">HTC J butterfly HTL23< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 08 / 29 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.4 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ac-2-5ghz-quad-">MSM8974AC(2.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-asus">Asus< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/AST21/device_mini.png"><span><a href = "/en/testkit/devicelist/ast21">ASUS MeMO Pad 8 AST21< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 08 / 22 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.2 < / a > < / td>
	< td>1200 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/atom-z3580-2-3ghz-quad-">Atom Z3580(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-g6430">PowerVR G6430< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-asus">Asus< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/AST21/device_mini.png"><span><a href = "/en/testkit/devicelist/ast21-2">ASUS MeMO Pad 8 AST21< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 08 / 22 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.2 < / a > < / td>
	< td>1200 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/atom-z3580-2-3ghz-quad-">Atom Z3580(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-g6430">PowerVR G6430< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-06F/device_mini.png"><span><a href = "/en/testkit/devicelist/f-06f">Rakuraku Smartphone 3 F - 06F< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 07 / 26 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.2 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8926-1-2ghz-quad-">MSM8926(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-305">Adreno 305 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-06F/device_mini.png"><span><a href = "/en/testkit/devicelist/f-06f-2">Rakuraku Smartphone 3 F - 06F< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 07 / 26 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.2 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8926-1-2ghz-quad-">MSM8926(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-305">Adreno 305 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYY24/device_mini.png"><span><a href = "/en/testkit/devicelist/kyy24-2">TORQUE G01< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 07 / 25 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.2 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8928-1-4ghz-quad-">MSM8928(1.4GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-305">Adreno 305 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/LGL24/device_mini.png"><span><a href = "/en/testkit/devicelist/lgl24-2">isai FL LGL24< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 07 / 18 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ac-2-5ghz-quad-">MSM8974AC(2.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sprint">Sprint< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/LGLS990/device_mini.png"><span><a href = "/en/testkit/devicelist/lgls990">LG G3 - English< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 07 / 14 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.2 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ac-2-5ghz-quad-">MSM8974AC(2.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SOT21/device_mini.png"><span><a href = "/en/testkit/devicelist/sot21">Xperia Z2 Tablet SOT21< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 07 / 05 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.2 < / a > < / td>
	< td>1920 * 1200 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ab-2-3ghz-quad-">MSM8974AB(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SOT21/device_mini.png"><span><a href = "/en/testkit/devicelist/sot21-2">Xperia Z2 Tablet SOT21< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 07 / 05 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>1920 * 1200 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ab-2-3ghz-quad-">MSM8974AB(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-geanee">geanee< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/FXC-5A/device_mini.png"><span><a href = "/en/testkit/devicelist/fxc-5a">FXC - 5A< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 07 / 04 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.2 < / a > < / td>
	< td>540 * 960 < / td >
	<td><a href = "/en/testkit/devicelist/mt6582m-1-3ghz-quad-">MT6582M(1.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-400-mp2">Mali - 400 MP2< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYY23/device_mini.png"><span><a href = "/en/testkit/devicelist/kyy23">URBANO L03 KYY23< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 06 / 28 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ab-2-3ghz-quad-">MSM8974AB(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYY23/device_mini.png"><span><a href = "/en/testkit/devicelist/kyy23-2">URBANO L03 KYY23< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 06 / 28 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ab-2-3ghz-quad-">MSM8974AB(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-05F/device_mini.png"><span><a href = "/en/testkit/devicelist/so-05f">Xperia Z2 Tablet SO - 05F< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 06 / 27 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.2 < / a > < / td>
	< td>1920 * 1200 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ab-2-3ghz-quad-">MSM8974AB(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-05F/device_mini.png"><span><a href = "/en/testkit/devicelist/so-05f-2">Xperia Z2 Tablet SO - 05F< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 06 / 27 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>1920 * 1200 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ab-2-3ghz-quad-">MSM8974AB(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-06F/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-06f">AQUOS PAD SH - 06F< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 06 / 20 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.2 < / a > < / td>
	< td>1200 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ab-2-3ghz-quad-">MSM8974AB(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/kt">KT< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SM-G906K/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-g906k">Galaxy S5 LTE - A SM - G906K - Korean< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 06 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.1 < / a > < / td>
	< td>1440 * 2560 < / td >
	<td><a href = "/en/testkit/devicelist/apq8084-2-5ghz-quad-">APQ8084(2.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-420">Adreno 420 < / a > < / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHL25/device_mini.png"><span><a href = "/en/testkit/devicelist/shl25">AQUOS SERIE SHL25< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 06 / 13 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ab-2-3ghz-quad-">MSM8974AB(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "https://appkitbox.com/en/wp-content/themes/testkit-en/images/noimage_s.jpg"><span><a href = "/en/testkit/devicelist/sm-t330nu">Galaxy Tab 4 8.0 - English< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 06 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.2 < / a > < / td>
	< td>800 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/apq8026-1-2ghz-quad-">APQ8026(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-305">Adreno 305 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-05F/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-05f">Disney Mobile on docomo SH - 05F< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 05 / 29 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-2">Android 4.2.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974-2-2ghz-quad-">MSM8974(2.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SOL25/device_mini.png"><span><a href = "/en/testkit/devicelist/sol25">Xperia ZL2 SOL25< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 05 / 23 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ab-2-3ghz-quad-">MSM8974AB(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SOL25/device_mini.png"><span><a href = "/en/testkit/devicelist/sol25-2">Xperia ZL2 SOL25< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 05 / 23 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ab-2-3ghz-quad-">MSM8974AB(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-03F/device_mini.png"><span><a href = "/en/testkit/devicelist/so-03f-2">Xperia Z2 SO - 03F< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 05 / 21 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ab-2-3ghz-quad-">MSM8974AB(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-03F/device_mini.png"><span><a href = "/en/testkit/devicelist/so-03f">Xperia Z2 SO - 03F< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 05 / 21 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ab-2-3ghz-quad-">MSM8974AB(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-04F/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-04f-2">GALAXY S5 SC - 04F< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 05 / 15 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ac-2-5ghz-quad-">MSM8974AC(2.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-04F/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-04f-3">GALAXY S5 SC - 04F< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 05 / 15 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ac-2-5ghz-quad-">MSM8974AC(2.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SCL23/device_mini.png"><span><a href = "/en/testkit/devicelist/scl23-2">GALAXY S5 SCL23< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 05 / 15 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ac-2-5ghz-quad-">MSM8974AC(2.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SKT01/device_mini.png"><span><a href = "/en/testkit/devicelist/skt01">Kyocera TORQUE SKT01< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 03 / 25 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-2">Android 4.2.2 < / a > < / td>
	< td>480 * 800 < / td >
	<td><a href = "/en/testkit/devicelist/msm8960-1-2ghz-dual-">MSM8960(1.2GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-225">Adreno 225 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHT22/device_mini.png"><span><a href = "/en/testkit/devicelist/sht22">AQUOS PAD SHT22< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 02 / 26 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-2">Android 4.2.2 < / a > < / td>
	< td>1200 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974-2-2ghz-quad-">MSM8974(2.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHL24/device_mini.png"><span><a href = "/en/testkit/devicelist/shl24">AQUOS PHONE SERIE mini SHL24< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 02 / 22 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-2">Android 4.2.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974-2-2ghz-quad-">MSM8974(2.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SBM303SH/device_mini.png"><span><a href = "/en/testkit/devicelist/sbm303sh">AQUOS PHONE Xx mini 303SH< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 02 / 21 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-2">Android 4.2.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974-2-2ghz-quad-">MSM8974(2.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SBM303SH/device_mini.png"><span><a href = "/en/testkit/devicelist/sbm303sh-2">AQUOS PHONE Xx mini 303SH< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 02 / 21 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-2">Android 4.2.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974-2-2ghz-quad-">MSM8974(2.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/GT-I9060I/device_mini.png"><span><a href = "/en/testkit/devicelist/gt-i9060i">Galaxy Grand Neo DUOS - English< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 02 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.4 < / a > < / td>
	< td>480 * 800 < / td >
	<td><a href = "/en/testkit/devicelist/bcm23550-1-2ghz-quad-">BCM23550(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/videocore-iv">VideoCore IV< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/LGL23/device_mini.png"><span><a href = "/en/testkit/devicelist/lgl23">G Flex LGL23< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 01 / 25 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-2">Android 4.2.2 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974-2-3ghz-quad-">MSM8974(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SOL24/device_mini.png"><span><a href = "/en/testkit/devicelist/sol24-3">Xperia Z Ultra SOL24< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 01 / 25 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974-2-2ghz-quad-">MSM8974(2.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SOL24/device_mini.png"><span><a href = "/en/testkit/devicelist/sol24">Xperia Z Ultra SOL24< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2014">2014 < / a > / 01 / 25 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974-2-2ghz-quad-">MSM8974(2.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-02F/device_mini.png"><span><a href = "/en/testkit/devicelist/so-02f-2">Xperia Z1f SO - 02F< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 12 / 19 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-2">Android 4.2.2 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974-2-2ghz-quad-">MSM8974(2.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-03F/device_mini.png"><span><a href = "/en/testkit/devicelist/f-03f">Disney Mobile on docomo F - 03F< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 12 / 13 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-2">Android 4.2.2 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974-2-2ghz-quad-">MSM8974(2.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-01FDQ/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-01fdq">SH - 01F DRAGON QUEST< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 12 / 07 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-2">Android 4.2.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974-2-2ghz-quad-">MSM8974(2.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/KYL22/device_mini.png"><span><a href = "/en/testkit/devicelist/kyl22">DIGNO M KYL22< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 11 / 23 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-2">Android 4.2.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974-2-2ghz-quad-">MSM8974(2.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/LGL22/device_mini.png"><span><a href = "/en/testkit/devicelist/lgl22-2">isai LGL22< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 11 / 23 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974-2-3ghz-quad-">MSM8974(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHL23/device_mini.png"><span><a href = "/en/testkit/devicelist/shl23">AQUOS PHONE SERIE SHL23< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 11 / 15 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-2">Android 4.2.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974-2-2ghz-quad-">MSM8974(2.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-01F/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-01f-2">AQUOS PHONE ZETA SH - 01F< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 11 / 07 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974-2-2ghz-quad-">MSM8974(2.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/LG-D958/device_mini.png"><span><a href = "/en/testkit/devicelist/lg-d958">LG G Flex< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 11 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-2">Android 4.2.2 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974-2-26ghz-quad-">MSM8974(2.26GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/Nexus 5/device_mini.png"><span><a href = "/en/testkit/devicelist/nexus_5">Nexus 5 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 11 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974-2-26ghz-quad-">MSM8974(2.26GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/Nexus 5/device_mini.png"><span><a href = "/en/testkit/devicelist/nexus_5-13">Nexus 5 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 11 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974-2-26ghz-quad-">MSM8974(2.26GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/Nexus 5/device_mini.png"><span><a href = "/en/testkit/devicelist/nexus_5-12">Nexus 5 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 11 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974-2-26ghz-quad-">MSM8974(2.26GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/Nexus 5/device_mini.png"><span><a href = "/en/testkit/devicelist/nexus_5-9">Nexus 5 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 11 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974-2-26ghz-quad-">MSM8974(2.26GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/Nexus 5/device_mini.png"><span><a href = "/en/testkit/devicelist/nexus_5-7">Nexus 5 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 11 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974-2-26ghz-quad-">MSM8974(2.26GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-02F/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-02f">GALAXY J SC - 02F< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 10 / 31 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-3">Android 4.3 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974-2-3ghz-quad-">MSM8974(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-01F/device_mini.png"><span><a href = "/en/testkit/devicelist/f-01f">ARROWS NX F - 01F< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 10 / 24 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974-2-2ghz-quad-">MSM8974(2.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-01F/device_mini.png"><span><a href = "/en/testkit/devicelist/so-01f">Xperia Z1 SO - 01F< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 10 / 24 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974-2-2ghz-quad-">MSM8974(2.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SOL23/device_mini.png"><span><a href = "/en/testkit/devicelist/sol23-2">Xperia Z1 SOL23< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 10 / 23 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974-2-2ghz-quad-">MSM8974(2.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-01F/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-01f">GALAXY Note 3 SC - 01F< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 10 / 17 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-3">Android 4.3 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974-2-3ghz-quad-">MSM8974(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-01F/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-01f-2">GALAXY Note 3 SC - 01F< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 10 / 17 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-3">Android 4.3 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974-2-3ghz-quad-">MSM8974(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SCL22/device_mini.png"><span><a href = "/en/testkit/devicelist/scl22">GALAXY Note 3 SCL22< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 10 / 17 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-3">Android 4.3 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974-2-3ghz-quad-">MSM8974(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/L-01F/device_mini.png"><span><a href = "/en/testkit/devicelist/l-01f">G2 L - 01F< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 10 / 11 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-2">Android 4.2.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974-2-3ghz-quad-">MSM8974(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-09E/device_mini.png"><span><a href = "/en/testkit/devicelist/f-09e">Rakuraku Smartphone Premium F - 09E< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 10 / 04 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-2">Android 4.2.2 < / a > < / td>
	< td>540 * 960 < / td >
	<td><a href = "/en/testkit/devicelist/apq8064t-1-7ghz-quad-">APQ8064T(1.7GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-320">Adreno 320 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/kt">KT< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SM-N900K/device_mini.png"><span><a href = "/en/testkit/devicelist/sm-n900k">Galaxy Note 3 SM - N900K - Korean< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 09 / 25 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/msm8974ab-2-3ghz-quad-">MSM8974AB(2.3GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-330">Adreno 330 < / a > < / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 5c/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_5c-2">iPhone 5c< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 09 / 20 < / td >
	<td><a href = "/en/testkit/devicelist/ios-8-1-2">iOS 8.1.2 < / a > < / td>
	< td>640 * 1136 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a6-1-3ghz-dual-">Apple A6(1.3GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-sgx543mp3">PowerVR SGX543MP3< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 5s/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_5s-4">iPhone 5s< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 09 / 20 < / td >
	<td><a href = "/en/testkit/devicelist/ios-7-1-2">iOS 7.1.2 < / a > < / td>
	< td>640 * 1136 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a7-1-3ghz-dual-">Apple A7(1.3GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-g6430">PowerVR G6430< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 5s/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_5s-6">iPhone 5s< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 09 / 20 < / td >
	<td><a href = "/en/testkit/devicelist/ios-8-1-1">iOS 8.1.1 < / a > < / td>
	< td>640 * 1136 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a7-1-3ghz-dual-">Apple A7(1.3GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-g6430">PowerVR G6430< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/at-t">AT & amp; T< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 5s/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_5s">iPhone 5s< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 09 / 20 < / td >
	<td><a href = "/en/testkit/devicelist/ios-8-4">iOS 8.4 < / a > < / td>
	< td>640 * 1136 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a7-1-3ghz-dual-">Apple A7(1.3GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-g6430">PowerVR G6430< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 5s/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_5s-8">iPhone 5s< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 09 / 20 < / td >
	<td><a href = "/en/testkit/devicelist/ios-8-4">iOS 8.4 < / a > < / td>
	< td>640 * 1136 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a7-1-3ghz-dual-">Apple A7(1.3GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-g6430">PowerVR G6430< / a>< / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 5s/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_5s-5">iPhone 5s< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 09 / 20 < / td >
	<td><a href = "/en/testkit/devicelist/ios-8-1">iOS 8.1 < / a > < / td>
	< td>640 * 1136 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a7-1-3ghz-dual-">Apple A7(1.3GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-g6430">PowerVR G6430< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-asus">Asus< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/Nexus 7/device_mini.png"><span><a href = "/en/testkit/devicelist/nexus_7">Nexus 7(2013) < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 08 / 28 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-3">Android 4.3 < / a > < / td>
	< td>1200 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apq8064-1-5ghz-quad-">APQ8064(1.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-320">Adreno 320 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-asus">Asus< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/Nexus 7/device_mini.png"><span><a href = "/en/testkit/devicelist/nexus_7-7">Nexus 7(2013) < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 08 / 28 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.1 < / a > < / td>
	< td>1200 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apq8064-1-5ghz-quad-">APQ8064(1.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-320">Adreno 320 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-asus">Asus< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/Nexus 7/device_mini.png"><span><a href = "/en/testkit/devicelist/nexus_7-8">Nexus 7(2013) < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 08 / 28 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.1 < / a > < / td>
	< td>1200 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apq8064-1-5ghz-quad-">APQ8064(1.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-320">Adreno 320 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-asus">Asus< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/Nexus 7/device_mini.png"><span><a href = "/en/testkit/devicelist/nexus_7-9">Nexus 7(2013) < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 08 / 28 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-2">Android 4.2.2 < / a > < / td>
	< td>1200 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apq8064-1-5ghz-quad-">APQ8064(1.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-320">Adreno 320 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-asus">Asus< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/Nexus 7/device_mini.png"><span><a href = "/en/testkit/devicelist/nexus_7-4">Nexus 7(2013) < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 08 / 28 < / td >
	<td><a href = "/en/testkit/devicelist/android-6-0">Android 6.0.1 < / a > < / td>
	< td>1200 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apq8064-1-5ghz-quad-">APQ8064(1.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-320">Adreno 320 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-08E/device_mini.png"><span><a href = "/en/testkit/devicelist/f-08e">Rakuraku Smartphone 2 F - 08E< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 08 / 16 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-2">Android 4.2.2 < / a > < / td>
	< td>540 * 960 < / td >
	<td><a href = "/en/testkit/devicelist/apq8064t-1-7ghz-quad-">APQ8064T(1.7GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-320">Adreno 320 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-07E/device_mini.png"><span><a href = "/en/testkit/devicelist/f-07e">Disney Mobile on docomo F - 07E< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 07 / 31 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-2">Android 4.2.2 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/apq8064t-1-7ghz-quad-">APQ8064T(1.7GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-320">Adreno 320 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/202K/device_mini.png"><span><a href = "/en/testkit/devicelist/202k">DIGNO R 202K< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 07 / 05 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-2">Android 4.2.2 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8960-1-5ghz-dual-">MSM8960(1.5GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-225">Adreno 225 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SBM206SH/device_mini.png"><span><a href = "/en/testkit/devicelist/sbm206sh">AQUOS PHONE Xx 206SH< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 06 / 28 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-2">Android 4.2.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apq8064t-1-7ghz-quad-">APQ8064T(1.7GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-320">Adreno 320 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-07E/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-07e">AQUOS PHONE si SH - 07E< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 06 / 21 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-2">Android 4.2.2 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/apq8064t-1-7ghz-quad-">APQ8064T(1.7GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-320">Adreno 320 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SBM205SH/device_mini.png"><span><a href = "/en/testkit/devicelist/sbm205sh">AQUOS PHONE ss 205SH< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 06 / 21 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-1">Android 4.1.2 < / a > < / td>
	< td>480 * 854 < / td >
	<td><a href = "/en/testkit/devicelist/msm8960-1-5ghz-dual-">MSM8960(1.5GHz Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-225">Adreno 225 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-panasonic">Panasonic< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/P-03E/device_mini.png"><span><a href = "/en/testkit/devicelist/p-03e">ELUGA P P - 03E< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 06 / 15 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-2">Android 4.2.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apq8064t-1-7ghz-quad-">APQ8064T(1.7GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-320">Adreno 320 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/t-mobile">T - Mobile< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/Prism II/device_mini.png"><span><a href = "/en/testkit/devicelist/prism_ii">T - Mobile Prism II - English< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 06 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-1">Android 4.1.1 < / a > < / td>
	< td>320 * 480 < / td >
	<td><a href = "/en/testkit/devicelist/cortex-a5-1-0ghz-">Cortex - A5(1.0GHz) < / a > < / td>
	<td>-< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SOL22/device_mini.png"><span><a href = "/en/testkit/devicelist/sol22">Xperia UL SOL22< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 05 / 25 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-1">Android 4.1.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apq8064-1-5ghz-quad-">APQ8064(1.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-320">Adreno 320 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-04E/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-04e">GALAXY S4 SC - 04E< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 05 / 23 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-2">Android 4.2.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apq8064t-1-9ghz-quad-">APQ8064T(1.9GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-320">Adreno 320 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-04E/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-04e-3">GALAXY S4 SC - 04E< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 05 / 23 < / td >
	<td><a href = "/en/testkit/devicelist/android-5-0">Android 5.0.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apq8064t-1-9ghz-quad-">APQ8064T(1.9GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-320">Adreno 320 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-04E/device_mini.png"><span><a href = "/en/testkit/devicelist/so-04e">Xperia A SO - 04E< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 05 / 17 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-1">Android 4.1.2 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/apq8064-1-5ghz-quad-">APQ8064(1.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-320">Adreno 320 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-acer">Acer< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/V370/device_mini.png"><span><a href = "/en/testkit/devicelist/v370">Acer Liquid E2 - English< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 05 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-2">Android 4.2.2 < / a > < / td>
	< td>540 * 960 < / td >
	<td><a href = "/en/testkit/devicelist/mtk-6589-1-2ghz-quad-">MTK 6589 (1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-sgx544mp">PowerVR SGX544MP< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/verizon-wireless">Verizon Wireless< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SCH-I545/device_mini.png"><span><a href = "/en/testkit/devicelist/sch-i545">Galaxy S4 - English< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 04 / 26 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-2">Android 4.2.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/powervr-sgx544-1-9ghz-quad-">PowerVR SGX544(1.9GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-320">Adreno 320 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-blu">BLU< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/LIFE PLAY/device_mini.png"><span><a href = "/en/testkit/devicelist/life_play">BLU Life Play - English< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 04 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-2">Android 4.2.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/mt6589-1-2ghz-quad-">MT6589(1.2GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-sgx544">PowerVR SGX544< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-03E/device_mini.png"><span><a href = "/en/testkit/devicelist/so-03e">Xperia Tablet Z SO - 03E< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 03 / 22 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-1">Android 4.1.2 < / a > < / td>
	< td>1920 * 1200 < / td >
	<td><a href = "/en/testkit/devicelist/apq8064-1-5ghz-quad-">APQ8064(1.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-320">Adreno 320 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SBM203SH/device_mini.png"><span><a href = "/en/testkit/devicelist/sbm203sh">AQUOS PHONE Xx 203SH< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 03 / 08< / td>
	<td><a href = "/en/testkit/devicelist/android-4-1">Android 4.1.2 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/qualcomm-snapdragon-s4-pro-apq8064-1-5ghz-quad-">Qualcomm Snapdragon S4 Pro APQ8064(1.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-320">Adreno 320 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-nec">NEC< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/N-04E/device_mini.png"><span><a href = "/en/testkit/devicelist/n-04e">MEDIAS X N - 04E< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 03 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-1">Android 4.1.2 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/apq8064-1-5ghz-quad-">APQ8064(1.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-320">Adreno 320 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-02E/device_mini.png"><span><a href = "/en/testkit/devicelist/f-02e">ARROWS X F - 02E< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 02 / 22 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-1">Android 4.1.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/tegra-3-ap37-1-7ghz-quad-">Tegra 3 AP37(1.7GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/ulp-geforce">ULP GeForce< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/C6603/device_mini.png"><span><a href = "/en/testkit/devicelist/c6603">Xperia Z< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 02 / 09< / td>
	<td><a href = "/en/testkit/devicelist/android-5-1">Android 5.1.1 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apq8064-mdm9215m-1-5ghz-quad-">APQ8064 + MDM9215M(1.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-320">Adreno 320 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-02E/device_mini.png"><span><a href = "/en/testkit/devicelist/so-02e">Xperia Z SO - 02E< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 02 / 09< / td>
	<td><a href = "/en/testkit/devicelist/android-4-1">Android 4.1.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apq8064-1-5ghz-quad-">APQ8064(1.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-320">Adreno 320 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SO-02E/device_mini.png"><span><a href = "/en/testkit/devicelist/so-02e-3">Xperia Z SO - 02E< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 02 / 09< / td>
	<td><a href = "/en/testkit/devicelist/android-4-4">Android 4.4.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apq8064-1-5ghz-quad-">APQ8064(1.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-320">Adreno 320 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/Nexus 10/device_mini.png"><span><a href = "/en/testkit/devicelist/nexus_10-3">Nexus 10 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 02 / 05 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-2">Android 4.2.2 < / a > < / td>
	< td>2560 * 1600 < / td >
	<td><a href = "/en/testkit/devicelist/cortex-a15-1-7ghz-dual-">Cortex - A15(1.7GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-t604">Mali - T604< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-panasonic">Panasonic< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/P-02E/device_mini.png"><span><a href = "/en/testkit/devicelist/p-02e">ELUGA X P - 02E< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 01 / 30 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-1">Android 4.1.2 < / a > < / td>
	< td>1080 * 1920 < / td >
	<td><a href = "/en/testkit/devicelist/apq8064-1-5ghz-quad-">APQ8064(1.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-320">Adreno 320 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-04E/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-04e">AQUOS PHONE EX SH - 04E< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 01 / 25 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-1">Android 4.1.2 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/apq8064-1-5ghz-quad-">APQ8064(1.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-320">Adreno 320 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-kyocera">Kyocera< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/201K/device_mini.png"><span><a href = "/en/testkit/devicelist/201k">HONEY BEE 201K< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2013">2013 < / a > / 01 / 25 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-1">Android 4.1.2 < / a > < / td>
	< td>480 * 800 < / td >
	<td><a href = "/en/testkit/devicelist/msm8960-1-5ghz-dual-">MSM8960(1.5GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-225">Adreno 225 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-03E/device_mini.png"><span><a href = "/en/testkit/devicelist/f-03e">ARROWS Kiss F - 03E< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 12 / 21 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-0">Android 4.0.4 < / a > < / td>
	< td>540 * 960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8960-1-5ghz-dual-">MSM8960(1.5GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-225">Adreno 225 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-03E/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-03e">GALAXY S III Alpha SC - 03E< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 12 / 05 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-1">Android 4.1.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-4412-1-6ghz-quad-">Exynos 4412 (1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-400-mp4">Mali - 400 MP4< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/at-t">AT & amp; T< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/LG-E970/device_mini.png"><span><a href = "/en/testkit/devicelist/lg-e970">LG Optimus G - English< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 12 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-1">Android 4.1.2 < / a > < / td>
	< td>768 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/qualcomm-apq8064-1-5ghz-quad-">Qualcomm APQ8064(1.5GHZ - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-320">Adreno 320 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-nec">NEC< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/N-02E/device_mini.png"><span><a href = "/en/testkit/devicelist/n-02e">MEDIAS U N - 02E< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 12 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-0">Android 4.0.4 < / a > < / td>
	< td>480 * 800 < / td >
	<td><a href = "/en/testkit/devicelist/msm8960-1-5ghz-dual-">MSM8960(1.5GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-225">Adreno 225 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-02E/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-02e">AQUOS PHONE ZETA SH - 02E< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 11 / 29 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-0">Android 4.0.4 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/apq8064-1-5ghz-quad-">APQ8064(1.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-320">Adreno 320 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-02E/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-02e-2">GALAXY Note II SC - 02E< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 11 / 16 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-3">Android 4.3 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-4412-1-6ghz-quad-">Exynos 4412 (1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-400-mp4">Mali - 400 MP4< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-02E/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-02e-3">GALAXY Note II SC - 02E< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 11 / 16 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-3">Android 4.3 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-4412-1-6ghz-quad-">Exynos 4412 (1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-400-mp4">Mali - 400 MP4< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/FJL21/device_mini.png"><span><a href = "/en/testkit/devicelist/fjl21">ARROWS ef FJL21< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 11 / 02 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-0">Android 4.0.4 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8960-1-5ghz-dual-">MSM8960(1.5GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-225">Adreno 225 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SCL21/device_mini.png"><span><a href = "/en/testkit/devicelist/scl21">GALAXY S III Progre SCL21< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 11 / 02 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-0">Android 4.0.4 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8960-1-5ghz-quad-">MSM8960(1.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-225">Adreno 225 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPad mini 1G/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_mini_1g-3">iPad mini< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 11 / 02 < / td >
	<td><a href = "/en/testkit/devicelist/ios-7-0-4">iOS 7.0.4 < / a > < / td>
	< td>768 * 1024 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a5-1ghz-dual-">Apple A5(1GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-sgx543mp2">PowerVR SGX543MP2< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPad mini 1G/device_mini.png"><span><a href = "/en/testkit/devicelist/ipad_mini_1g">iPad mini< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 11 / 02 < / td >
	<td><a href = "/en/testkit/devicelist/ios-6-1-2">iOS 6.1.2 < / a > < / td>
	< td>768 * 1024 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a5-1ghz-dual-">Apple A5(1GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-sgx543mp2">PowerVR SGX543MP2< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-01E/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-01e-2">AQUOS PHONE si SH - 01E< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 10 / 05 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-0">Android 4.0.4 < / a > < / td>
	< td>540 * 960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8960-1-5ghz-dual-">MSM8960(1.5GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-225">Adreno 225 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 5/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_5-8">iPhone 5 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 09 / 21 < / td >
	<td><a href = "/en/testkit/devicelist/ios-6-0-2">iOS 6.0.2 < / a > < / td>
	< td>640 * 1136 < / td >
	<td><a href = "/en/testkit/devicelist/apple-a6-1-3ghz-">Apple A6(1.3GHz) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-sgx543">PowerVR SGX543< / a>< / td>
	<td>KR< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-nec">NEC< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/N-08D/device_mini.png"><span><a href = "/en/testkit/devicelist/n-08d">MEDIAS TAB UL N - 08D< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 09 / 20 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-0">Android 4.0.4 < / a > < / td>
	< td>800 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8960-1-5ghz-dual-">MSM8960(1.5GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-225">Adreno 225 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-10D/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-10d">AQUOS PHONE sv SH - 10D< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 08 / 30 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-0">Android 4.0.4 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8960-1-5ghz-dual-">MSM8960(1.5GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-225">Adreno 225 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-panasonic">Panasonic< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/P-07D/device_mini.png"><span><a href = "/en/testkit/devicelist/p-07d">ELUGA power P - 07D< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 08 / 10 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-0">Android 4.0.4 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8960-1-5ghz-dual-">MSM8960(1.5GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-225">Adreno 225 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-12D/device_mini.png"><span><a href = "/en/testkit/devicelist/f-12d-2">F - 12D< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 08 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-0">Android 4.0.3 < / a > < / td>
	< td>480 * 800 < / td >
	<td><a href = "/en/testkit/devicelist/msm8255-1-4ghz-">MSM8255(1.4GHz) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-205">Adreno 205 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/GT-B5330L/device_mini.png"><span><a href = "/en/testkit/devicelist/gt-b5330l">Galaxy Chat B5330 - English< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 08 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-0">Android 4.0.4 < / a > < / td>
	< td>240 * 320 < / td >
	<td><a href = "/en/testkit/devicelist/-850mhz-">(850MHz) < / a > < / td>
	<td>-< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/GT-N7100/device_mini.png"><span><a href = "/en/testkit/devicelist/gt-n7100">Samsung Galaxy Note II - English< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 08 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-1">Android 4.1.2 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/cortex-a9-1-6ghz-quad-">Cortex - A9(1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-400-mp">Mali - 400 MP< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/GT-N7100/device_mini.png"><span><a href = "/en/testkit/devicelist/gt-n7100-2">Samsung Galaxy Note II - English< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 08 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-1">Android 4.1.2 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/cortex-a9-1-6ghz-quad-">Cortex - A9(1.6GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-400-mp">Mali - 400 MP< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/T-02D/device_mini.png"><span><a href = "/en/testkit/devicelist/t-02d">REGZA Phone T - 02D< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 07 / 26 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-0">Android 4.0.4 < / a > < / td>
	< td>540 * 960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8960-1-5ghz-dual-">MSM8960(1.5GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-225">Adreno 225 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/IS17SH/device_mini.png"><span><a href = "/en/testkit/devicelist/is17sh">AQUOS PHONE CL IS17SH< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 07 / 20 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-0">Android 4.0.4 < / a > < / td>
	< td>540 * 960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8655t-1-4ghz-">MSM8655T(1.4GHz) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-205">Adreno 205 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-nec">NEC< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/LT-TLA/device_mini.png"><span><a href = "/en/testkit/devicelist/lt-tla">NEC LifeTouch L< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 07 / 05 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-0">Android 4.0.3 < / a > < / td>
	< td>1280 * 800 < / td >
	<td><a href = "/en/testkit/devicelist/omap4460-1-5ghz-dual-">OMAP4460(1.5GHz - Dual) < / a > < / td>
	<td>-< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/verizon-wireless">Verizon Wireless< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SCH-I535/device_mini.png"><span><a href = "/en/testkit/devicelist/sch-i535">Galaxy S III - English< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 07 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-1">Android 4.1.2 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8960-1-4ghz-quad-">MSM8960(1.4GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-225">Adreno 225 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/LT26i/device_mini.png"><span><a href = "/en/testkit/devicelist/lt26i">Sony Xperia S - English< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 07 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-0">Android 4.0.4 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/scorpion-1-5ghz-dual-">Scorpion(1.5GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-220">Adreno 220 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/L-05D/device_mini.png"><span><a href = "/en/testkit/devicelist/l-05d">Optimus it L - 05D< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 06 / 30 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-0">Android 4.0.4 < / a > < / td>
	< td>480 * 800 < / td >
	<td><a href = "/en/testkit/devicelist/msm8960-1-5ghz-dual-">MSM8960(1.5GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-225">Adreno 225 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/L-05D/device_mini.png"><span><a href = "/en/testkit/devicelist/l-05d-2">Optimus it L - 05D< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 06 / 30 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-0">Android 4.0.4 < / a > < / td>
	< td>480 * 800 < / td >
	<td><a href = "/en/testkit/devicelist/msm8960-1-5ghz-dual-">MSM8960(1.5GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-225">Adreno 225 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-09D/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-09d-2">AQUOS PHONE ZETA SH - 09D< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 06 / 29 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-0">Android 4.0.4 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8960-1-5ghz-dual-">MSM8960(1.5GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-225">Adreno 225 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/ISW16SH/device_mini.png"><span><a href = "/en/testkit/devicelist/isw16sh">AQUOS PHONE SERIE ISW16SH< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 06 / 28 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-0">Android 4.0.4 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8660a-1-5ghz-">MSM8660A(1.5GHz) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-220">Adreno 220 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-fujitsu">Fujitsu< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/F-09D/device_mini.png"><span><a href = "/en/testkit/devicelist/f-09d">F - 09D ANTEPRIMA< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 06 / 27 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-0">Android 4.0.3 < / a > < / td>
	< td>480 * 800 < / td >
	<td><a href = "/en/testkit/devicelist/msm8255-1-4ghz-">MSM8255(1.4GHz) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-205">Adreno 205 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-07D/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-07d">AQUOS PHONE st SH - 07D< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 06 / 07 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-0">Android 4.0.4 < / a > < / td>
	< td>480 * 854 < / td >
	<td><a href = "/en/testkit/devicelist/msm8255-1ghz-">MSM8255(1GHz) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-205">Adreno 205 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/ST27i/device_mini.png"><span><a href = "/en/testkit/devicelist/st27i">Xperia go ST27i< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 06 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-1">Android 4.1.2 < / a > < / td>
	< td>320 * 480 < / td >
	<td><a href = "/en/testkit/devicelist/u8500-1ghz-dual-">U8500(1Ghz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-400">Mali - 400 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-htc">HTC< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/ISW13HT/device_mini.png"><span><a href = "/en/testkit/devicelist/isw13ht">HTC J ISW13HT< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 05 / 25 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-0">Android 4.0.4 < / a > < / td>
	< td>540 * 960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8660a-1-5ghz-dual-">MSM8660A(1.5GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-225">Adreno 225 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/GT-P3113/device_mini.png"><span><a href = "/en/testkit/devicelist/gt-p3113">GALAXY Tab 2 7.0 - English< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 04 / 22 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-1">Android 4.1.1 < / a > < / td>
	< td>600 * 1024 < / td >
	<td><a href = "/en/testkit/devicelist/omap4-1ghz-dual-">OMAP4(1GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-sgx540">PowerVR SGX540< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-05D/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-05d">GALAXY Note SC - 05D< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 04 / 06 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-1">Android 4.1.2 < / a > < / td>
	< td>800 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/apq8060-1-5ghz-dual-">APQ8060(1.5GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-220">Adreno 220 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-05D/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-05d-3">GALAXY Note SC - 05D< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 04 / 06 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-1">Android 4.1.2 < / a > < / td>
	< td>800 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/apq8060-1-5ghz-dual-">APQ8060(1.5GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-220">Adreno 220 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sprint">Sprint< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-htc">HTC< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/EVO/device_mini.png"><span><a href = "/en/testkit/devicelist/evo">HTC Evo 4G LTE - English< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 04 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-1">Android 4.1.1 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/krait-1-5ghz-dual-">Krait(1.5GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-225">Adreno 225 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sony">Sony< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/IS12S/device_mini.png"><span><a href = "/en/testkit/devicelist/is12s">Xperia acro HD IS12S< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 03 / 10 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-0">Android 4.0.4 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8660-1-5ghz-dual-">MSM8660(1.5GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-220">Adreno 220 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-04D/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-04d">Q - pot.Phone SH - 04D< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 02 / 14 < / td >
	<td><a href = "/en/testkit/devicelist/android-2-3">Android 2.3.4 < / a > < / td>
	< td>540 * 960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8255-1ghz-">MSM8255(1GHz) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-205">Adreno 205 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/INFOBAR C01/device_mini.png"><span><a href = "/en/testkit/devicelist/infobar_c01">INFOBAR C01< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2012">2012 < / a > / 02 / 03 < / td >
	<td><a href = "/en/testkit/devicelist/android-2-3">Android 2.3.5 < / a > < / td>
	< td>480 * 854 < / td >
	<td><a href = "/en/testkit/devicelist/msm8655t-1-4ghz-">MSM8655T(1.4GHz) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-205">Adreno 205 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SHL21/device_mini.png"><span><a href = "/en/testkit/devicelist/shl21">AQUOS PHONE SERIE SHL21< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2011">2011 < / a > / 11 / 02 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-0">Android 4.0.4 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/msm8960-1-5ghz-">MSM8960(1.5GHz) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-225">Adreno 225 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-lg">LG< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/LGL21/device_mini.png"><span><a href = "/en/testkit/devicelist/lgl21">Optimus G LGL21< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2011">2011 < / a > / 11 / 02 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-0">Android 4.0.4 < / a > < / td>
	< td>720 * 1280 < / td >
	<td><a href = "/en/testkit/devicelist/apq8064-1-5ghz-quad-">APQ8064(1.5GHz - Quad) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-320">Adreno 320 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/au-by-kddi">au by KDDI< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 4S/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_4s-2">iPhone 4S< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2011">2011 < / a > / 10 / 14 < / td >
	<td><a href = "/en/testkit/devicelist/ios-5-1-1">iOS 5.1.1 < / a > < / td>
	< td>640 * 960 < / td >
	<td><a href = "/en/testkit/devicelist/cortex-a9-800mhz-">Cortex - A9(800MHz) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-sgx543mp2">PowerVR SGX543MP2< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 4S/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_4s-3">iPhone 4S< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2011">2011 < / a > / 10 / 14 < / td >
	<td><a href = "/en/testkit/devicelist/ios-6-1">iOS 6.1 < / a > < / td>
	< td>640 * 960 < / td >
	<td><a href = "/en/testkit/devicelist/cortex-a9-800mhz-">Cortex - A9(800MHz) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-sgx543mp2">PowerVR SGX543MP2< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-sharp">Sharp< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SH-13C/device_mini.png"><span><a href = "/en/testkit/devicelist/sh-13c">AQUOS PHONE f SH - 13C< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2011">2011 < / a > / 08 / 06 < / td >
	<td><a href = "/en/testkit/devicelist/android-2-3">Android 2.3.4 < / a > < / td>
	< td>540 * 960 < / td >
	<td><a href = "/en/testkit/devicelist/msm8255-1ghz-">MSM8255(1GHz) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-205">Adreno 205 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/verizon-wireless">Verizon Wireless< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-htc">HTC< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/ADR6400L/device_mini.png"><span><a href = "/en/testkit/devicelist/adr6400l">HTC ThunderBolt - English< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2011">2011 < / a > / 07 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/android-4-0">Android 4.0.4 < / a > < / td>
	< td>480 * 800 < / td >
	<td><a href = "/en/testkit/devicelist/scorpion-1ghz-">Scorpion(1GHz) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-205">Adreno 205 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-nec">NEC< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/N-06C/device_mini.png"><span><a href = "/en/testkit/devicelist/n-06c">MEDIAS WP N - 06C< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2011">2011 < / a > / 06 / 24 < / td >
	<td><a href = "/en/testkit/devicelist/android-2-3">Android 2.3.3 < / a > < / td>
	< td>480 * 854 < / td >
	<td><a href = "/en/testkit/devicelist/msm8255-1ghz-">MSM8255(1GHz) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-205">Adreno 205 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/ntt-docomo">NTT docomo< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/SC-02C/device_mini.png"><span><a href = "/en/testkit/devicelist/sc-02c">GALAXY S II SC - 02C< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2011">2011 < / a > / 06 / 23 < / td >
	<td><a href = "/en/testkit/devicelist/android-2-3">Android 2.3.6 < / a > < / td>
	< td>480 * 800 < / td >
	<td><a href = "/en/testkit/devicelist/exynos-4210-1-2ghz-dual-">Exynos 4210 (1.2GHz - Dual) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/mali-400-mp4">Mali - 400 MP4< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sprint">Sprint< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-samsung">Samsung< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/Nexus S 4G/device_mini.png"><span><a href = "/en/testkit/devicelist/nexus_s_4g">Google Nexus S 4G - English< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2011">2011 < / a > / 05 / 08< / td>
	<td><a href = "/en/testkit/devicelist/android-4-1">Android 4.1.1 < / a > < / td>
	< td>480 * 800 < / td >
	<td><a href = "/en/testkit/devicelist/cortex-a8-1ghz-">Cortex - A8(1GHz) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-sgx540">PowerVR SGX540< / a>< / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/sim-free">Sim Free< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-htc">HTC< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/HTC Desire S/device_mini.png"><span><a href = "/en/testkit/devicelist/htc_desire_s">HTC Desire S - English< / a>< / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2011">2011 < / a > / 03 / 01 < / td >
	<td><a href = "/en/testkit/devicelist/android-2-3">Android 2.3.3 < / a > < / td>
	< td>480 * 800 < / td >
	<td><a href = "/en/testkit/devicelist/msm8255-1ghz-">MSM8255(1GHz) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/adreno-205">Adreno 205 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 4/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_4-3">iPhone 4 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2010">2010 < / a > / 06 / 24 < / td >
	<td><a href = "/en/testkit/devicelist/ios-6-0">iOS 6.0 < / a > < / td>
	< td>640 * 960 < / td >
	<td><a href = "/en/testkit/devicelist/cortex-a8-800mhz-">Cortex - A8(800MHz) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-sgx535-vxd-375">PowerVR SGX535 + VXD 375 < / a > < / td>
	<td>JP< / td>
	< / tr>
	<tr>
	<td><a href = "/en/testkit/devicelist/softbank">SoftBank< / a>< / td>
	<td><a href = "/en/testkit/devicelist/manufacturer-apple">Apple< / a>< / td>
	<td>
	<img src = "/remotetestkit/devicelist/images/iPhone 4/device_mini.png"><span><a href = "/en/testkit/devicelist/iphone_4-2">iPhone 4 < / a > < / span>
	< / td>
	<td> < a href = "/en/testkit/devicelist/year-2010">2010 < / a > / 06 / 14 < / td >
	<td><a href = "/en/testkit/devicelist/ios-5-1-1">iOS 5.1.1 < / a > < / td>
	< td>640 * 960 < / td >
	<td><a href = "/en/testkit/devicelist/cortex-a8-800mhz-">Cortex - A8(800MHz) < / a > < / td>
	<td><a href = "/en/testkit/devicelist/powervr-sgx535-vxd-375">PowerVR SGX535 + VXD 375 < / a > < / td>
	<td>JP< / td>
	< / tr>

	< / tbody>
	< / table>

*/


