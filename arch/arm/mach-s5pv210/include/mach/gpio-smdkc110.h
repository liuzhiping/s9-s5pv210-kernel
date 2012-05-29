#ifndef __GPIO_SMDKC110_H_
#define __GPIO_SMDKC110_H_


#define GPIO_PS_VOUT			S5PV210_GPH0(2)
#define GPIO_PS_VOUT_AF			0xFF

#define GPIO_BUCK_1_EN_A		S5PV210_GPH0(3)
#define GPIO_BUCK_1_EN_B		S5PV210_GPH0(4)

#define GPIO_BUCK_2_EN			S5PV210_GPH0(5)
#define GPIO_DET_35			S5PV210_GPH0(6)
#define GPIO_DET_35_AF			0xFF

#define GPIO_nPOWER			S5PV210_GPH2(6)

#define GPIO_EAR_SEND_END		S5PV210_GPH3(6)
#define GPIO_EAR_SEND_END_AF		0xFF

#define GPIO_HWREV_MODE0		S5PV210_GPJ0(2)
#define GPIO_HWREV_MODE1		S5PV210_GPJ0(3)
#define GPIO_HWREV_MODE2		S5PV210_GPJ0(4)
#define GPIO_HWREV_MODE3		S5PV210_GPJ0(7)

#define GPIO_PS_ON			S5PV210_GPJ1(4)

#define GPIO_MICBIAS_EN			S5PV210_GPJ4(2)

#define GPIO_UART_SEL			S5PV210_MP05(7)

//Apollo +
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define S5PV210_GPA0CON         (S5PV210_GPA0_BASE + 0x00) //GPA0
#define S5PV210_GPA0DAT         (S5PV210_GPA0_BASE + 0x04)
#define S5PV210_GPA0PUD         (S5PV210_GPA0_BASE + 0x08)
#define S5PV210_GPA0DRV         (S5PV210_GPA0_BASE + 0x0c)
#define S5PV210_GPA0CONPDN      (S5PV210_GPA0_BASE + 0x10)
#define S5PV210_GPA0PUDPDN      (S5PV210_GPA0_BASE + 0x14)

#define S5PV210_GPA1CON         (S5PV210_GPA1_BASE + 0x00) //GPA1
#define S5PV210_GPA1DAT         (S5PV210_GPA1_BASE + 0x04)
#define S5PV210_GPA1PUD         (S5PV210_GPA1_BASE + 0x08)
#define S5PV210_GPA1DRV         (S5PV210_GPA1_BASE + 0x0c)
#define S5PV210_GPA1CONPDN      (S5PV210_GPA1_BASE + 0x10)
#define S5PV210_GPA1PUDPDN      (S5PV210_GPA1_BASE + 0x14)

#define S5PV210_GPBCON         (S5PV210_GPB_BASE + 0x00) //GPB
#define S5PV210_GPBDAT         (S5PV210_GPB_BASE + 0x04)
#define S5PV210_GPBPUD         (S5PV210_GPB_BASE + 0x08)
#define S5PV210_GPBDRV         (S5PV210_GPB_BASE + 0x0c)
#define S5PV210_GPBCONPDN      (S5PV210_GPB_BASE + 0x10)
#define S5PV210_GPBPUDPDN      (S5PV210_GPB_BASE + 0x14)

#define S5PV210_GPC0CON         (S5PV210_GPC0_BASE + 0x00) //GPC0
#define S5PV210_GPC0DAT         (S5PV210_GPC0_BASE + 0x04)
#define S5PV210_GPC0PUD         (S5PV210_GPC0_BASE + 0x08)
#define S5PV210_GPC0DRV         (S5PV210_GPC0_BASE + 0x0c)
#define S5PV210_GPC0CONPDN      (S5PV210_GPC0_BASE + 0x10)
#define S5PV210_GPC0PUDPDN      (S5PV210_GPC0_BASE + 0x14)

#define S5PV210_GPC1CON         (S5PV210_GPC1_BASE + 0x00) //GPC1
#define S5PV210_GPC1DAT         (S5PV210_GPC1_BASE + 0x04)
#define S5PV210_GPC1PUD         (S5PV210_GPC1_BASE + 0x08)
#define S5PV210_GPC1DRV         (S5PV210_GPC1_BASE + 0x0c)
#define S5PV210_GPC1CONPDN      (S5PV210_GPC1_BASE + 0x10)
#define S5PV210_GPC1PUDPDN      (S5PV210_GPC1_BASE + 0x14)

#define S5PV210_GPD0CON         (S5PV210_GPD0_BASE + 0x00) //GPD0
#define S5PV210_GPD0DAT         (S5PV210_GPD0_BASE + 0x04)
#define S5PV210_GPD0PUD         (S5PV210_GPD0_BASE + 0x08)
#define S5PV210_GPD0DRV         (S5PV210_GPD0_BASE + 0x0c)
#define S5PV210_GPD0CONPDN      (S5PV210_GPD0_BASE + 0x10)
#define S5PV210_GPD0PUDPDN      (S5PV210_GPD0_BASE + 0x14)

#define S5PV210_GPD1CON         (S5PV210_GPD1_BASE + 0x00) //GPD1
#define S5PV210_GPD1DAT         (S5PV210_GPD1_BASE + 0x04)
#define S5PV210_GPD1PUD         (S5PV210_GPD1_BASE + 0x08)
#define S5PV210_GPD1DRV         (S5PV210_GPD1_BASE + 0x0c)
#define S5PV210_GPD1CONPDN      (S5PV210_GPD1_BASE + 0x10)
#define S5PV210_GPD1PUDPDN      (S5PV210_GPD1_BASE + 0x14)

#define S5PV210_GPE0CON         (S5PV210_GPE0_BASE + 0x00) //GPE0
#define S5PV210_GPE0DAT         (S5PV210_GPE0_BASE + 0x04)
#define S5PV210_GPE0PUD         (S5PV210_GPE0_BASE + 0x08)
#define S5PV210_GPE0DRV         (S5PV210_GPE0_BASE + 0x0c)
#define S5PV210_GPE0CONPDN      (S5PV210_GPE0_BASE + 0x10)
#define S5PV210_GPE0PUDPDN      (S5PV210_GPE0_BASE + 0x14)

#define S5PV210_GPE1CON         (S5PV210_GPE1_BASE + 0x00) //GPE1
#define S5PV210_GPE1DAT         (S5PV210_GPE1_BASE + 0x04)
#define S5PV210_GPE1PUD         (S5PV210_GPE1_BASE + 0x08)
#define S5PV210_GPE1DRV         (S5PV210_GPE1_BASE + 0x0c)
#define S5PV210_GPE1CONPDN      (S5PV210_GPE1_BASE + 0x10)
#define S5PV210_GPE1PUDPDN      (S5PV210_GPE1_BASE + 0x14)

#define S5PV210_GPF0CON         (S5PV210_GPF0_BASE + 0x00) //GPF0
#define S5PV210_GPF0DAT         (S5PV210_GPF0_BASE + 0x04)
#define S5PV210_GPF0PUD         (S5PV210_GPF0_BASE + 0x08)
#define S5PV210_GPF0DRV         (S5PV210_GPF0_BASE + 0x0c)
#define S5PV210_GPF0CONPDN      (S5PV210_GPF0_BASE + 0x10)
#define S5PV210_GPF0PUDPDN      (S5PV210_GPF0_BASE + 0x14)

#define S5PV210_GPF1CON         (S5PV210_GPF1_BASE + 0x00) //GPF1
#define S5PV210_GPF1DAT         (S5PV210_GPF1_BASE + 0x04)
#define S5PV210_GPF1PUD         (S5PV210_GPF1_BASE + 0x08)
#define S5PV210_GPF1DRV         (S5PV210_GPF1_BASE + 0x0c)
#define S5PV210_GPF1CONPDN      (S5PV210_GPF1_BASE + 0x10)
#define S5PV210_GPF1PUDPDN      (S5PV210_GPF1_BASE + 0x14)

#define S5PV210_GPF2CON         (S5PV210_GPF2_BASE + 0x00) //GPF2
#define S5PV210_GPF2DAT         (S5PV210_GPF2_BASE + 0x04)
#define S5PV210_GPF2PUD         (S5PV210_GPF2_BASE + 0x08)
#define S5PV210_GPF2DRV         (S5PV210_GPF2_BASE + 0x0c)
#define S5PV210_GPF2CONPDN      (S5PV210_GPF2_BASE + 0x10)
#define S5PV210_GPF2PUDPDN      (S5PV210_GPF2_BASE + 0x14)

#define S5PV210_GPF3CON         (S5PV210_GPF3_BASE + 0x00) //GPF3
#define S5PV210_GPF3DAT         (S5PV210_GPF3_BASE + 0x04)
#define S5PV210_GPF3PUD         (S5PV210_GPF3_BASE + 0x08)
#define S5PV210_GPF3DRV         (S5PV210_GPF3_BASE + 0x0c)
#define S5PV210_GPF3CONPDN      (S5PV210_GPF3_BASE + 0x10)
#define S5PV210_GPF3PUDPDN      (S5PV210_GPF3_BASE + 0x14)

#define S5PV210_GPG0CON         (S5PV210_GPG0_BASE + 0x00) //GPG0
#define S5PV210_GPG0DAT         (S5PV210_GPG0_BASE + 0x04)
#define S5PV210_GPG0PUD         (S5PV210_GPG0_BASE + 0x08)
#define S5PV210_GPG0DRV         (S5PV210_GPG0_BASE + 0x0c)
#define S5PV210_GPG0CONPDN      (S5PV210_GPG0_BASE + 0x10)
#define S5PV210_GPG0PUDPDN      (S5PV210_GPG0_BASE + 0x14)

#define S5PV210_GPG1CON         (S5PV210_GPG1_BASE + 0x00) //GPG1
#define S5PV210_GPG1DAT         (S5PV210_GPG1_BASE + 0x04)
#define S5PV210_GPG1PUD         (S5PV210_GPG1_BASE + 0x08)
#define S5PV210_GPG1DRV         (S5PV210_GPG1_BASE + 0x0c)
#define S5PV210_GPG1CONPDN      (S5PV210_GPG1_BASE + 0x10)
#define S5PV210_GPG1PUDPDN      (S5PV210_GPG1_BASE + 0x14)

#define S5PV210_GPG2CON         (S5PV210_GPG2_BASE + 0x00) //GPG2
#define S5PV210_GPG2DAT         (S5PV210_GPG2_BASE + 0x04)
#define S5PV210_GPG2PUD         (S5PV210_GPG2_BASE + 0x08)
#define S5PV210_GPG2DRV         (S5PV210_GPG2_BASE + 0x0c)
#define S5PV210_GPG2CONPDN      (S5PV210_GPG2_BASE + 0x10)
#define S5PV210_GPG2PUDPDN      (S5PV210_GPG2_BASE + 0x14)

#define S5PV210_GPG3CON         (S5PV210_GPG3_BASE + 0x00) //GPG3
#define S5PV210_GPG3DAT         (S5PV210_GPG3_BASE + 0x04)
#define S5PV210_GPG3PUD         (S5PV210_GPG3_BASE + 0x08)
#define S5PV210_GPG3DRV         (S5PV210_GPG3_BASE + 0x0c)
#define S5PV210_GPG3CONPDN      (S5PV210_GPG3_BASE + 0x10)
#define S5PV210_GPG3PUDPDN      (S5PV210_GPG3_BASE + 0x14)

#define S5PV210_GPH0CON         (S5PV210_GPH0_BASE + 0x00) //GPH0
#define S5PV210_GPH0DAT         (S5PV210_GPH0_BASE + 0x04)
#define S5PV210_GPH0PUD         (S5PV210_GPH0_BASE + 0x08)
#define S5PV210_GPH0DRV         (S5PV210_GPH0_BASE + 0x0c)

#define S5PV210_GPH1CON         (S5PV210_GPH1_BASE + 0x00) //GPH1
#define S5PV210_GPH1DAT         (S5PV210_GPH1_BASE + 0x04)
#define S5PV210_GPH1PUD         (S5PV210_GPH1_BASE + 0x08)
#define S5PV210_GPH1DRV         (S5PV210_GPH1_BASE + 0x0c)

#define S5PV210_GPH2CON         (S5PV210_GPH2_BASE + 0x00) //GPH2
#define S5PV210_GPH2DAT         (S5PV210_GPH2_BASE + 0x04)
#define S5PV210_GPH2PUD         (S5PV210_GPH2_BASE + 0x08)
#define S5PV210_GPH2DRV         (S5PV210_GPH2_BASE + 0x0c)

#define S5PV210_GPH3CON         (S5PV210_GPH3_BASE + 0x00) //GPH3
#define S5PV210_GPH3DAT         (S5PV210_GPH3_BASE + 0x04)
#define S5PV210_GPH3PUD         (S5PV210_GPH3_BASE + 0x08)
#define S5PV210_GPH3DRV         (S5PV210_GPH3_BASE + 0x0c)

#define S5PV210_GPICON         (S5PV210_GPI_BASE + 0x00) //GPI
#define S5PV210_GPIDAT         (S5PV210_GPI_BASE + 0x04)
#define S5PV210_GPIPUD         (S5PV210_GPI_BASE + 0x08)
#define S5PV210_GPIDRV         (S5PV210_GPI_BASE + 0x0c)
#define S5PV210_GPICONPDN      (S5PV210_GPI_BASE + 0x10)
#define S5PV210_GPIPUDPDN      (S5PV210_GPI_BASE + 0x14)

#define S5PV210_GPJ0CON         (S5PV210_GPJ0_BASE + 0x00) //GPJ0
#define S5PV210_GPJ0DAT         (S5PV210_GPJ0_BASE + 0x04)
#define S5PV210_GPJ0PUD         (S5PV210_GPJ0_BASE + 0x08)
#define S5PV210_GPJ0DRV         (S5PV210_GPJ0_BASE + 0x0c)
#define S5PV210_GPJ0CONPDN      (S5PV210_GPJ0_BASE + 0x10)
#define S5PV210_GPJ0PUDPDN      (S5PV210_GPJ0_BASE + 0x14)

#define S5PV210_GPJ1CON         (S5PV210_GPJ1_BASE + 0x00) //GPJ1
#define S5PV210_GPJ1DAT         (S5PV210_GPJ1_BASE + 0x04)
#define S5PV210_GPJ1PUD         (S5PV210_GPJ1_BASE + 0x08)
#define S5PV210_GPJ1DRV         (S5PV210_GPJ1_BASE + 0x0c)
#define S5PV210_GPJ1CONPDN      (S5PV210_GPJ1_BASE + 0x10)
#define S5PV210_GPJ1PUDPDN      (S5PV210_GPJ1_BASE + 0x14)

#define S5PV210_GPJ2CON         (S5PV210_GPJ2_BASE + 0x00) //GPJ2
#define S5PV210_GPJ2DAT         (S5PV210_GPJ2_BASE + 0x04)
#define S5PV210_GPJ2PUD         (S5PV210_GPJ2_BASE + 0x08)
#define S5PV210_GPJ2DRV         (S5PV210_GPJ2_BASE + 0x0c)
#define S5PV210_GPJ2CONPDN      (S5PV210_GPJ2_BASE + 0x10)
#define S5PV210_GPJ2PUDPDN      (S5PV210_GPJ2_BASE + 0x14)

#define S5PV210_GPJ3CON         (S5PV210_GPJ3_BASE + 0x00) //GPJ3
#define S5PV210_GPJ3DAT         (S5PV210_GPJ3_BASE + 0x04)
#define S5PV210_GPJ3PUD         (S5PV210_GPJ3_BASE + 0x08)
#define S5PV210_GPJ3DRV         (S5PV210_GPJ3_BASE + 0x0c)
#define S5PV210_GPJ3CONPDN      (S5PV210_GPJ3_BASE + 0x10)
#define S5PV210_GPJ3PUDPDN      (S5PV210_GPJ3_BASE + 0x14)

#define S5PV210_GPJ4CON         (S5PV210_GPJ4_BASE + 0x00) //GPJ4
#define S5PV210_GPJ4DAT         (S5PV210_GPJ4_BASE + 0x04)
#define S5PV210_GPJ4PUD         (S5PV210_GPJ4_BASE + 0x08)
#define S5PV210_GPJ4DRV         (S5PV210_GPJ4_BASE + 0x0c)
#define S5PV210_GPJ4CONPDN      (S5PV210_GPJ4_BASE + 0x10)
#define S5PV210_GPJ4PUDPDN      (S5PV210_GPJ4_BASE + 0x14)

#define S5PV210_ETC1PUD         (S5PV210_ETC1_BASE + 0x08)
#define S5PV210_ETC1DRV         (S5PV210_ETC1_BASE + 0x0c)

////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define GPIO_LEVEL_LOW          0
#define GPIO_LEVEL_HIGH         1
#define GPIO_LEVEL_NONE         2
#define GPIO_INPUT              0
#define GPIO_OUTPUT             1

#define GPIO_SYS_POWER          S5PV210_GPH2(4)

#define GPIO_WIFI_POWER         S5PV210_GPJ3(5)
#define GPIO_WIFI_POWER_CPDN    S5PV210_GPJ3CONPDN
#define GPIO_WIFI_POWER_CPDN_V  (0x3<<10)

#define GPIO_WLAN_BT_EN         S5PV210_GPJ4(1)
#define GPIO_WLAN_BT_EN_CPDN    S5PV210_GPJ4CONPDN
#define GPIO_WLAN_BT_EN_CPDN_V  (0x3<<2)

#define GPIO_WLAN_HOST_WAKE     S5PV210_GPH2(7)
#define GPIO_WLAN_HOST_WAKE_AF  0xF
#define GPIO_WLAN_IRQ           IRQ_EINT(23)

#define GPIO_BT_HOST_WAKE       S5PV210_GPH0(2)
#define GPIO_BT_HOST_WAKE_AF    0xF
#define GPIO_BT_HOST_IRQ        IRQ_EINT(2)

#define GPIO_BT_WAKE            S5PV210_GPJ3(6)
#define GPIO_BT_WAKE_AF         1
#define GPIO_WLAN_WAKE          S5PV210_GPJ3(7)
#define GPIO_WLAN_WAKE_AF       1

#define GPIO_BT_RXD             S5PV210_GPA0(0)
#define GPIO_BT_RXD_AF          2

#define GPIO_BT_TXD             S5PV210_GPA0(1)
#define GPIO_BT_TXD_AF          2

#define GPIO_BT_CTS             S5PV210_GPA0(2)
#define GPIO_BT_CTS_AF          2

#define GPIO_BT_RTS             S5PV210_GPA0(3)
#define GPIO_BT_RTS_AF          2

#define GPIO_GT2005_CAMERA_PWR         S5PV210_GPJ4(0)
#define GPIO_GT2005_CAMERA_PWRDWN      S5PV210_GPJ4(2)
#define GPIO_GT2005_CAMERA_RESET       S5PV210_GPJ4(4)

#define GPIO_GC2015_CAMERA_PWR         S5PV210_GPJ4(0)
#define GPIO_GC2015_CAMERA_PWRDWN      S5PV210_GPJ4(2)
#define GPIO_GC2015_CAMERA_RESET       S5PV210_GPJ4(4)

#define GPIO_TP_PWR             S5PV210_GPJ3(2)
#define GPIO_TP_INT             S5PV210_GPH1(7)
#define GPIO_TP_INT_CFG         S3C_GPIO_SFN(0xF)
#define GPIO_TP_INT_NO          IRQ_EINT15
#define GPIO_TP_RST             S5PV210_GPH1(6) //TP复位控制

#define GPIO_LCD_PWR            S5PV210_GPH2(5)
#define GPIO_LVDS_PWR           S5PV210_GPJ2(3)
#define GPIO_LCD_LED_PWR        S5PV210_GPJ2(2)
#define GPIO_PIXELQI_LED_PWR    S5PV210_GPH0(6)

#define GPIO_HEADPHONE          S5PV210_GPH0(3)


#define GPIO_HDMI_HPD           S5PV210_GPH1(5)
#define GPIO_HDMI_HPD_AF        4
#define GPIO_HDMI_HPD_CFG       S3C_GPIO_SFN(0xF)
#define GPIO_HDMI_HPD_IRQ       IRQ_EINT13
#if defined(CONFIG_S5PV210_DEVBOARD) || defined(CONFIG_S5PV210_A8388_V2) || defined(CONFIG_S5PV210_S9)
#define GPIO_HDMI_I2C_EN        S5PV210_GPJ3(1)
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#if defined(CONFIG_S5PV210_DEVBOARD) || defined(CONFIG_S5PV210_A8388_V2)
#define GPIO_WLAN_nRST          S5PV210_GPB(2)
#define GPIO_BT_nRST            S5PV210_GPB(3)
#define GPIO_WLAN_SDIO_CLK      S5PV210_GPG1(0)
#define GPIO_WLAN_SDIO_CLK_AF   2

#define GPIO_WLAN_SDIO_CMD      S5PV210_GPG1(1)
#define GPIO_WLAN_SDIO_CMD_AF   2

#define GPIO_WLAN_SDIO_D0       S5PV210_GPG1(3)
#define GPIO_WLAN_SDIO_D0_AF    2

#define GPIO_WLAN_SDIO_D1       S5PV210_GPG1(4)
#define GPIO_WLAN_SDIO_D1_AF    2

#define GPIO_WLAN_SDIO_D2       S5PV210_GPG1(5)
#define GPIO_WLAN_SDIO_D2_AF    2

#define GPIO_WLAN_SDIO_D3       S5PV210_GPG1(6)
#define GPIO_WLAN_SDIO_D3_AF    2

#define GPIO_KEY_HOME           S5PV210_GPH1(2)
#define GPIO_KEY_HOME_EINT      10

#define GPIO_MT9P111_CAMERA_PWR         S5PV210_GPJ4(0)
#define GPIO_MT9P111_CAMERA_PWRDWN      S5PV210_GPJ4(2)
#define GPIO_MT9P111_CAMERA_RESET       S5PV210_GPJ4(4)
#define GPIO_MT9P111_CAMERA_FLASH       S5PV210_GPJ4(3)

#define GPIO_OV5640_CAMERA_PWR         S5PV210_GPJ4(0)
#define GPIO_OV5640_CAMERA_PWRDWN      S5PV210_GPJ4(2)
#define GPIO_OV5640_CAMERA_RESET       S5PV210_GPJ4(4)
#define GPIO_OV5640_CAMERA_FLASH       S5PV210_GPJ4(3)

//#define GPIO_TP_LED             S5PV210_GPJ2(7) //触摸按键灯控制

#endif /* CONFIG_S5PV210_DEVBOARD */



////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#if defined(CONFIG_S5PV210_A8388_V1) || defined(CONFIG_S5PV210_S9) || defined(CONFIG_S5PV210_A8388_V2) || defined(CONFIG_S5PV210_A9)

#define GPIO_GPS_PWR_EN         S5PV210_GPH0(5)
#define GPIO_GPS_nRST           S5PV210_GPH0(7)
#define GPIO_GPS_ENABLE         S5PV210_GPJ3(0)

#define GPIO_GPS_RXD            S5PV210_GPA0(4)
#define GPIO_GPS_RXD_AF         2
#define GPIO_GPS_TXD            S5PV210_GPA0(5)
#define GPIO_GPS_TXD_AF         2
#define GPIO_GPS_CTS            S5PV210_GPA0(6)
#define GPIO_GPS_CTS_AF         2
#define GPIO_GPS_RTS            S5PV210_GPA0(7)
#define GPIO_GPS_RTS_AF         2

#define GPIO_WLAN_nRST          S5PV210_GPJ3(3)
#define GPIO_WLAN_nRST_CPDN     S5PV210_GPJ3CONPDN
#define GPIO_WLAN_nRST_CPDN_V   (0x3<<6)

#define GPIO_BT_nRST            S5PV210_GPJ3(4)
#define GPIO_BT_nRST_CPDN       S5PV210_GPJ3CONPDN
#define GPIO_BT_nRST_CPDN_V     (0x3<<8)

#define GPIO_WLAN_SDIO_CLK      S5PV210_GPG3(0)
#define GPIO_WLAN_SDIO_CLK_AF   2

#define GPIO_WLAN_SDIO_CMD      S5PV210_GPG3(1)
#define GPIO_WLAN_SDIO_CMD_AF   2

#define GPIO_WLAN_SDIO_D0       S5PV210_GPG3(3)
#define GPIO_WLAN_SDIO_D0_AF    2

#define GPIO_WLAN_SDIO_D1       S5PV210_GPG3(4)
#define GPIO_WLAN_SDIO_D1_AF    2

#define GPIO_WLAN_SDIO_D2       S5PV210_GPG3(5)
#define GPIO_WLAN_SDIO_D2_AF    2

#define GPIO_WLAN_SDIO_D3       S5PV210_GPG3(6)
#define GPIO_WLAN_SDIO_D3_AF    2

#define GPIO_KEY_POWER          S5PV210_GPH0(1)
#define GPIO_KEY_POWER_EINT     1
#define GPIO_KEY_HOME           S5PV210_GPH1(2)

////////////////////////////////////////////////////////////////////////////
#if defined(CONFIG_S5PV210_A8388_V1) || defined(CONFIG_S5PV210_A8388_V2)
#define GPIO_PIXELQI_MODE       S5PV210_GPH3(2) //pixelqi 模式切换
#define GPIO_PIXELQI_ACTIVE     0               //亮屏电平

#define GPIO_VIBRATOR_PWR       S5PV210_GPJ2(5) //震动马达控制
#define GPIO_VIBRATOR_ACTIVE    0               //震动马达电平

#define GPIO_TP_LED             S5PV210_GPH3(5) //触摸按键灯控制
#define GPIO_3G_PWR							S5PV210_GPJ2(0)	//3G电源控制
#define GPIO_3G_RST							S5PV210_GPJ2(4)	//3G复位控制	
#define GPIO_3G_DISABLE							S5PV210_GPJ2(1)	//3G使能控制

#define GPIO_KEY_VOLUME_UP      S5PV210_GPH3(3)
#define GPIO_KEY_VUP_EINT       27
#define GPIO_KEY_VOLUME_DOWN    S5PV210_GPH3(4)
#define GPIO_KEY_VDOWN_EINT     28
#define GPIO_CHARGE_STAT1								S5PV210_GPH2(6)
#define GPIO_CHARGE_STAT2								S5PV210_GPH1(3)
#endif /* CONFIG_S5PV210_A8388_V1 CONFIG_S5PV210_A8388_V2*/

////////////////////////////////////////////////////////////////////////////
#ifdef CONFIG_S5PV210_S9
#define GPIO_KEY_MENU           S5PV210_GPH3(3)
#define GPIO_KEY_VUP_EINT       27
#define GPIO_KEY_ESC            S5PV210_GPH3(4)
#define GPIO_KEY_VDOWN_EINT     28

#define GPIO_CPLD_RESET         S5PV210_GPH3(0)

#define GPIO_ROTATION_MODE      S5PV210_GPH3(2) //旋屏开关
#define GPIO_ROTATION_ACTIVE    0               //旋屏开关电平

//#define GPIO_GPS_RESET            S5PV210_GPH0(7)
#define GPIO_HUB_PWR              S5PV210_GPH2(1)
#define GPIO_USB_5V               S5PV210_GPH2(2)
#define GPIO_CHARGE_STAT1								S5PV210_GPH2(6)
#define GPIO_CHARGE_STAT2								S5PV210_GPH1(3)
#define	GPIO_WIFI_TYPE									S5PV210_GPJ2(1)
#endif /* CONFIG_S5PV210_S9 */

////////////////////////////////////////////////////////////////////////////
#ifdef CONFIG_S5PV210_A9
#define GPIO_KEY_VOLUME_UP           S5PV210_GPH3(1)
#define GPIO_KEY_VUP_EINT       25
#define GPIO_KEY_VOLUME_DOWN            S5PV210_GPH3(2)
//#define GPIO_KEY_VDOWN_EINT     26
#define GPIO_KEY_MENU           S5PV210_GPH3(4)
#define GPIO_KEY_MENU_EINT       27
#define GPIO_KEY_ESC            S5PV210_GPH3(3)
#define GPIO_KEY_VDOWN_EINT     28

#define GPIO_VIBRATOR_PWR       S5PV210_GPJ2(5) //震动马达控制
#define GPIO_VIBRATOR_ACTIVE    0               //震动马达电平
#define GPIO_WIFI_SLEEP         S5PV210_GPJ3(4)
#define GPIO_WIFI_SLEEP_CPDN    S5PV210_GPJ3CONPDN
#define GPIO_WIFI_SLEEP_CPDN_V  (0x3<<8)

#define GPIO_TP_LED             	S5PV210_GPH3(5) //触摸按键灯控制
#define GPIO_3G_PWR								S5PV210_GPJ2(1)	//3G使能控制
#define GPIO_3G_RST								S5PV210_GPJ2(4)	//3G复位控制
#define GPIO_HUB_PWR              S5PV210_GPH2(1)
#define GPIO_USB_5V               S5PV210_GPH2(2)
#define GPIO_FLASH_MODE						S5PV210_GPJ3(1)
#define GPIO_FLASH_EN							S5PV210_GPD0(1)
#define GPIO_3G_SIM_DETECT				S5PV210_GPH1(0)
#define GPIO_FRID_PWR_CTR					S5PV210_GPH3(7)

#undef GPIO_GPS_PWR_EN
#define GPIO_GPS_PWR_EN         S5PV210_GPJ3(0)
#define GPIO_GPS_nRST           S5PV210_GPH0(7)
#define GPIO_MOTOR_EN						S5PV210_GPJ2(5)

#define GPIO_MT9P111_CAMERA_PWR         S5PV210_GPJ4(0)
#define GPIO_MT9P111_CAMERA_PWRDWN      S5PV210_GPJ1(5)
#define GPIO_MT9P111_CAMERA_RESET       S5PV210_GPJ4(3)
//#define GPIO_MT9P111_CAMERA_FLASH       S5PV210_GPJ3(1)

#define GPIO_CHARGE_STAT1								S5PV210_GPH2(6)
#define GPIO_CHARGE_STAT2								S5PV210_GPH1(3)

#endif /* CONFIG_S5PV210_A9 */

#endif
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Apollo -
#endif
/* end of __GPIO_SMDKC110_H_ */

