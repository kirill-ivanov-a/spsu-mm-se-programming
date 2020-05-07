﻿using System;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using PuntoBanco;
using Moq;

namespace UnitTestPuntoBanco
{
    [TestClass]
    public class UnitTest1
    {
        [TestMethod]
        public void TestBots()
        {
            gamer[] gamers = new gamer[2];
            gamers[0] = new gamer1(40);
            gamers[1] = new gamer2(40);
            Random rnd = new Random();
            SomeBet[] bets = new SomeBet[2];
            for (int i = 0; i < 400; i++)
            {
                bets[0] = gamers[0].makeBet();
                bets[1] = gamers[1].makeBet();
                if (rnd.Next(100) < 45)
                    gamers[0].recive(bets[0].money * 2);
                if (rnd.Next(100) < 45)
                    gamers[1].recive(bets[1].money * 2);
            }
            Console.WriteLine($"{gamers[0].moneyMoment} - first, second - {gamers[1].moneyMoment}");
        }

        [TestMethod]
        public void TestGame()
        {
            SomeBet betNow;
            betNow.man = 0;
            betNow.money = 0;
            betNow.target = 0;
            var mock = new Mock<Iinteraction>();
            mock.Setup(x => x.getInt()).Returns(1);

            //mock.Setup(x => x.doBet(ref It.Ref<SomeBet>.IsAny, It.IsAny<int>())).Callback((ref SomeBet bet, int money) => Console.WriteLine("s"));
            //Problem: ref bet - must change value in do.Bet(ref SomeBet, int)
        }

    }
}
