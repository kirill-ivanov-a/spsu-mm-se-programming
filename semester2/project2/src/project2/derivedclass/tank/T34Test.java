package project2.derivedclass.tank;

import org.junit.Assert;
import org.junit.Test;


public class T34Test
{
    @Test
    public void printTankTest()
    {
        T34 t34 = new T34("USSR", 26, 4, 54.4f, 500, 1942);
        Assert.assertEquals("USSR", t34.country);
        Assert.assertEquals(26, t34.weight_in_tons);
        Assert.assertEquals(4, t34.crew);
        Assert.assertEquals(54.4f, t34.speed_in_km_in_h, 0.0001);
        Assert.assertEquals(500, t34.engine_power);
        Assert.assertEquals(1942, t34.year_of_creation);
        Assert.assertEquals("Name: T_34\n" +
                "Country: USSR\n" +
                "Weight(in tins): 26\n" +
                "Crew: 4 people\n" +
                "Speed(in km in hour): 54.4\n" +
                "Power: 500\n" +
                "Year of creation: 1942\n", t34.printTank());
    }
}

